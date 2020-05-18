#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct product
{
    char name[100];
    int id;
    int price;
    int qty;
};
struct bill
{
    char pname[100];
    int  pid;
    int  pprice;


};
void manage()
{
    system("color B");
    int choice;
    printf ("\t\t============================================\n\n");
    printf ("\t\t Welcome Product Management System\n\n");
    printf ("1.Add New product\n\n");
    printf ("2.Display All product\n\n");
    printf ("3.Search product\n\n");
    printf ("4.Update product\n\n");
    printf ("5.Delete product\n\n");
    printf ("0.exit\n\n");
    printf("\n\t\tEnter the choice : \n");
    scanf("%d",&choice);
    system("CLS");
    switch(choice)
    {
    case 1:
    {
        add();
        back_to_manage();
        break;
    }
    case 2:
    {
        display();
        back_to_manage();
        break;
    }
    case 3:
    {
        search();
        back_to_manage();
        break;
    }
    case 4:
    {
        update();
        back_to_manage();
        break;
    }
    case 5:
    {
        delete();
        back_to_manage();
        break;
    }
    default :
    {
        printf("\n\n\n\t\t\tInvalid number\n\t\t\tTry again\n\t\t\tLOADING");
        main();
    }
    }
}

void back_to_manage()
{
    int i;
    printf("\nDo you want to Continue press (1) or Back (2)\n");
    scanf("%d",&i);
    system("CLS");
    if(i==1)
    {
        manage();
    }
    else if(i==2)
    {
        printf("\n\n\t\t\tThank You\n\n\t\t\tLOADING");
        main();
    }
    else
    {
        printf("Invalid Choice\n");
        back_to_manage();
    }
}
void add()
{
    char again='y';
    struct product t;
    FILE *fp;
    fp=fopen("list","a");
    while(again=='y')
    {
        printf("Enter the product name :\n");
        scanf("%s",&t.name);
        printf("Enter the product id :\n");
        scanf("%d",&t.id);
        printf("Enter the product price :\n");
        scanf("%d",&t.price);
        printf("Enter the qty :\n");
        scanf("%d",&t.qty);
        fwrite(&t,sizeof(t),1,fp);
        printf("\nDo you want to add more data? (y/n)  : \n\n");
        fflush(stdin);
        again=getch();
        fclose(fp);
    }
}
void display()
{
    struct product t;
    FILE *fp;
    fp=fopen("list","r");
    printf ("product details -\n");
    printf("\tid\t\tname\t\tprice\t\tquantity\n\n");

    while( fread(&t,sizeof(t), 1, fp))
    {

        printf("\t%d\t\t%s\t\t%d\t\t%d\n",t.id,t.name,t.price,t.qty);


    }
    fclose (fp);
}
void user_display()
{
    struct product t;
    FILE *fp;
    fp=fopen("list","r");
    printf ("product details -\n");
    printf("\tid\t\tname\t\tprice\n\n");

    while( fread(&t,sizeof(t), 1, fp))
    {

        printf("\t%d\t\t%s\t\t%d\t\t\n",t.id,t.name,t.price);


    }
    fclose (fp);
}
void search()
{
    struct product t;
    FILE *fp;
    fp=fopen("list","r");
    char nm[20];
    printf("Enter name:\n");
    scanf("%s",nm);
    system("CLS");
    printf("\n\n");
    while(fread(&t,sizeof(t), 1, fp))
    {
        if(strcmpi(t.name,nm)==0)
        {
            printf("\nname :%s\nid :%d\nprice :%d\nqty :%d\n",t.name,t.id,t.price,t.qty);
        }
        else if(strcmpi(t.name,nm)==1)
        {
            printf("\n\n\n\tData Not found\n\a");
        }
    }
    fclose(fp);
}
void update ()
{
    char another;
    struct product t;
    FILE *fp;
    fp=fopen("list","r+");
    char nm[20];
    system("CLS");
    another='y';
    while(another=='y')
    {
        printf("Enter the product name to modify :");
        scanf("%s", nm);
        rewind(fp);
        while(fread(&t,sizeof(t),1,fp))
        {
            if(strcmpi(t.name,nm)==0)
            {
                printf("Enter new product name :");
                scanf("%s",&t.name);
                printf("Enter new product id :");
                scanf("%d",&t.id);
                printf("Enter new product price :");
                scanf("%d",&t.price);
                printf("Enter new qty :");
                scanf("%d",&t.qty);
                fseek(fp,-sizeof(t),SEEK_CUR);
                fwrite(&t,sizeof(t),1,fp);
                break;
            }
        }
        printf("\nModify another record(y/n");
        fflush(stdin);
        another = getch();
    }
    fclose(fp);
}
void delete()
{
    FILE *fp,*fp1;
    struct product t;
    int id;
    int found=0,count=0;
    fp=fopen("list","r");
    fp1=fopen("temporary","w");
    printf("\n enter the id you want to delete\n");
    scanf("%d",&id);
    system("CLS");
    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(t.id==id)
        {
            found=1;
        }
        else
        {
            fwrite(&t,sizeof(t),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if(found==0)
    {
        printf("sry no record found");
    }
    else
    {
        fp=fopen("list","w");
        fp1=fopen("temporary","r");
        while(1)
        {
            fread(&t,sizeof(t),1,fp1);
            if(feof(fp1))
            {
                break;
            }
            fwrite(&t,sizeof(t),1,fp);
        }
    }
    fclose(fp);
    fclose(fp1);
}
int main()
{
    int choice;
    system("COLOR B");
    printf ("\t\t============================================\n\n");
    printf ("\t\t Welcome Product Management System\n\n");
    printf ("1.Manage product\n\n");
    printf ("2.purchase product\n\n");
    scanf("%d",&choice);
    system("CLS");
    switch(choice)
    {
    case 1:
    {
        manage();
        break;
    }
    case 2:
    {
        purchase();
        break;
    }
    default :
    {
        printf("\n\n\n\t\t\tInvalid number\n\t\t");
    }

    }
void purchase()
    {
        user_display();
        int total=0,size=0,p;
        struct product t;
        FILE *fp;
        fp=fopen("list","rb");
        char nm[20];
        int i,n,c,q;
        printf ("how much product you want to buy?\n");
        scanf ("%d",&n);

        for (i=0; i<n; i++)
        {

            printf("Enter name:\n");
            scanf("%s",nm);
            rewind(fp);
            printf("\n\n");
            while(fread(&t,sizeof(t), 1, fp))
            {
                if(strcmpi(t.name,nm)==0)
                {
                    printf("tell us how much quantity you want : ");
                    scanf("%d",&q);
                    t.qty=t.qty-q;
                    printf("\n\t%d\t\t%s\t\t%d\t\t%d\n",t.id,t.name,t.price,t.qty);
                  //  fseek(fp,-sizeof(t),SEEK_CUR);
                  //  fwrite(&t,sizeof(t),1,fp);
                    c=(t.price*q);
                    printf("\nname :%s\t",nm);
                    printf("price :%d\n\n\n",c);
                    break;

                }

            }
            total=total+c;
            fflush(stdin);
        }
        printf ("==============>Total Bill Amount [tk= %d]\n\n",total);
        printf("\nPress 0 to go main menu:  ");
        scanf("%d",&p);
        if(p==0)
        {
            system("cls");
            main();
        }
        else
        {
            printf("Invalid choice\n");
        }
        fclose(fp);
        //return t;
}

#include<stdio.h>
#include<string.h>
struct product
{
    char name[100];
    int id;
    int price;
    int qty;
};
int id,nqty;
void manage();
void mnge();
void add();
void display();
void search();
void update();
void delete();
void purchase();
struct bill
{
    char pname[100];
    int  pid;
    int  pprice;

};
int main()
{
    int id,nqty;
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
}
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
        mnge();
        break;
    }
    case 2:
    {
        display();
        mnge();
        break;
    }
    case 3:
    {
        search();
        mnge();
        break;
    }
    case 4:
    {
        update();
        mnge();
        break;
    }
    case 5:
    {
        delete();
        mnge();
        break;
    }
    default :
    {
        printf("\n\n\n\t\t\tInvalid number\n\t\t\tTry again\n\t\t\tLOADING");
        main();
    }
    }
}

void mnge()
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
        mnge();
    }
}
void add()
{
    char again='y';
    struct product t;
    while(again=='y')
    {
        FILE *fp;
        fp=fopen("cart.txt","a");
        printf("Enter the product name :\n");
        scanf("%s",&t.name);
        printf("Enter the product id :\n");
        scanf("%d",&t.id);
        printf("Enter the product price :\n");
        scanf("%d",&t.price);
        printf("Enter the qty :\n");
        scanf("%d",&t.qty);
        fwrite(&t,sizeof(t),1,fp);
        printf("\n\nThe record is successfully added\n\n");
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
    fp=fopen("cart.txt","r");
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
    fp=fopen("cart.txt","r");
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
    fp=fopen("cart.txt","r");
    char nm[20];
    printf("Enter name:\n");
    scanf("%s",nm);
    system("CLS");
    printf("\n\n");
    while(fread(&t,sizeof(t), 1, fp))
    {
        if(strcmpi(t.name,nm)==0)
        {
            printf("\tid\t\tname\t\tprice\t\tquantity\n\n");
            printf("\t%d\t\t%s\t\t%d\t\t%d\n",t.id,t.name,t.price,t.qty);

        }
    }
    fclose(fp);
}
void update ()
{
    char another;
    struct product t;
    FILE *fp;
    fp=fopen("cart.txt","r+");
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
    fp=fopen("cart.txt","r");
    fp1=fopen("shocart.txt","w");
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
        fp=fopen("cart.txt","w");
        fp1=fopen("shocart.txt","r");
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
void purchase()
{   display();
    int total=0;
    struct product t;
    FILE *fp;
    fp=fopen("cart.txt","r");
    int i,n,c,qty;
    printf ("how much product you want to buy?\n");
    scanf ("%d",&n);
    for (i=0; i<n; i++)
    {

        printf("\n\n");
        printf("Enter id: ");
        scanf("%d",&id);
        printf("\n");
        while(fread(&t,sizeof(t), 1, fp))
        {
            if(t.id==id)
            {
                printf("tell us how much quantity you want : ");
                scanf("%d",&qty);
                c=(t.price*qty);
                nqty=t.qty-qty;
                printf("\nname :%s\t",t.name);
                printf("price :%d\n\n\n",c);
                updatep();
                break;
            }
        }
        total=total+c;
    }
    printf ("==============>Total Bill Amount [tk= %d]\n\n",total);
    fclose(fp);
}
void updatep(int id,int nqty;)
{
    FILE *fp,*fp1;
    struct product t;
    int found=0;
    fp=fopen("cart.txt","r");
    fp1=fopen("tempo.txt","w");
    while(1)
    {
        fread(&t,sizeof(t), 1, fp);

        if (feof(fp))
        {
            break;
        }

        if (t.id==id)
        {
            found =1;
            t.qty=nqty;
            fwrite(&t,sizeof(t), 1, fp1);
        }
        else
        {
            fwrite(&t,sizeof(t), 1, fp1);
        }
    }
    fclose (fp);
    fclose (fp1);
    if (found==0)
    {
        printf ("\n\nSorry No Record Found\n\n");
    }
    else
    {
        fp=fopen ("cart.txt","w");
        fp1=fopen ("tempo.txt","r");
        while(1)
        {
            fread(&t,sizeof(t), 1, fp1);
            if (feof(fp1))
            {
                break;
            }
            fwrite(&t,sizeof(t),1, fp);
        }
    }
    fclose (fp);
    fclose (fp1);
}

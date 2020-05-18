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


void add()
{
    char again='y';
    struct product t;
    FILE *fp;
    fp=fopen("cart.txt","a");
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
{
    user_display();
    FILE *fp,*fp1;
    struct product t;
    int found=0,count=0;
    int total=0,size=0,p;
    char nm[20];
    int i,n,c,q;
    fp=fopen("cart.txt","w");
    fp1=fopen("showcart.txt","w");

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
                fprintf(fp1,"%d",t.qty);
                printf("\n\t\t\t%d\n",t.qty);
                display();
                // fseek(fp,-sizeof(t),SEEK_CUR);
                //    fwrite(&t,sizeof(t),1,fp);
                c=(t.price*q);
                printf("\nname :%s\t",nm);
                printf("price :%d\n\n\n",c);
                break;
                fclose(fp1);
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
        printf("Invalid choice\n");
    fclose(fp);

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
}

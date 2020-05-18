#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Product
{
    int id;
    char name[20];
    int price;
    int qty;
};

struct bill
{
    int pid;
    char pname[20];
    int pprice;
};

//char mygetch();

int getID();
int billfileno();

void manageProduct();
void purchaseProduct();
void generateBill();
void addProduct();
void displayAllProduct();
struct Product findProduct(int id);
void updateProduct(int id,int qty);
void search();
void update();
void delet();
void user_display();

char fproduct[]= {"product.dat"};
char fbill[]= {"bill.dat"};
int total=0;

int main()
{
    FILE *fp;
    int ch;
    system("COLOR B");
    system("cls");
    while(1)
    {
        system("cls");
        printf("\n=========================================\n");
        printf("Welcome to Management System\n\n");
        printf("1. Management Product\n\n");
        printf("2. Purchase Product\n\n");
        printf("3. Generate Bill\n\n");
        printf("0. Exit\n\n");
        printf("=========================================");
        printf("\nPlease enter your Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            manageProduct();
            break;

        case 2:
            purchaseProduct();
            break;

              case 3:
            generateBill();
            break;

        case 0:
            exit(0);
        }
        // mygetch();
    }
    return 0;
}

int getID()
{
    FILE *fp;
    int value=0;
    fp=fopen("prodid.txt","r");
    if(fp==NULL)
    {
        fp=fopen("prodid.txt","w");
        fprintf(fp,"%d",0);
        fclose(fp);
        fp=fopen("prodid.txt","r");
    }
    fscanf(fp,"%d",&value);
    fclose(fp);
    fp=fopen("prodid.txt","w");
    fprintf(fp,"%d",value+1);
    fclose(fp);
    return value+1;
}

void manageProduct()
{
    int ch;

    system("cls");
    printf("\n============================================");
    printf("\n\t\tWelcome Product Management System\n\n");
    printf("1. Add New Product\n\n");
    printf("2. Display All Product\n\n");
    printf("3. Search Product\n\n");
    printf("4. Update Product\n\n");
    printf("5. Delete Product\n\n");
    printf("0. Back\n\n");
    printf("============================================");
    printf("\nPlease enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        system("cls");
        addProduct();
        break;

    case 2:
        system("cls");
        displayAllProduct();
        break;

    case 3:
        system("cls");
        search();
        break;

    case 4:
         system("cls");
        update();
        break;

    case 5:
         system("cls");
        delet();
        break;

    case 0:
       main();
        break;

    }

}

void addProduct()
{
    int a;
    FILE *fp;
    struct Product t1;

    fp=fopen(fproduct,"ab");
    t1.id=getID();
    printf("\nEnter Product Name: ");
    scanf("%s",t1.name);
    printf("\nEnter Product price: ");
    scanf("%d",&t1.price);
    printf("\nEnter Product qty: ");
    scanf("%d",&t1.qty);

    fwrite(&t1,sizeof(t1),1,fp);
    fclose(fp);
        printf("Press 0 to back\n");
    scanf("%d",&a);
    if(a==0)
        manageProduct();
    else
    {
        printf("Invalid Choice");
    }
}

void displayAllProduct()
{
    int a;
    FILE *fp;
    struct Product t;
    int id,found=0;
    fp=fopen(fproduct,"rb");
    printf("\n=======================================\n");
    printf("\t\tProduct Details");
    printf("\n========================================\n");
    printf("ID\tName\tQty\tPrice\n\n");
    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("%d\t",t.id);
        printf("%s\t",t.name);
        printf("%d\t",t.qty);
        printf("%d\t\n",t.price);
    }
    printf("\n==========================================\n");
    fclose(fp);
            printf("Press 0 to back\n");
    scanf("%d",&a);
    if(a==0)
        manageProduct();
    else
    {
        printf("Invalid Choice");
    }
}

void search()
{
    struct Product t;
    FILE *fp;
    fp=fopen(fproduct,"rb");
    // fp=fopen("product.dat","r");
    char nm[20];
    printf("Enter name:\n");
    scanf("%s",nm);
    system("cls");
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
    struct Product t;
    FILE *fp;
    fp=fopen("product.dat","r+");
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

void user_display()
{
        FILE *fp;
    struct Product t;
    int id,found=0;
    ///system("cls");
    fp=fopen(fproduct,"rb");
    printf("\n------------------------------------------------------------------\n");
    printf("\t\tProduct Details");
    printf("\n------------------------------------------------------------------\n");
    printf("ID\tName\tPrice\n\n");
    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("%d\t",t.id);
        printf("%s\t",t.name);
        printf("%d\t\n",t.price);
    }
    printf("\n------------------------------------------------------------------\n");
    fclose(fp);
}

void purchaseProduct()
{
    char ch1,ch2;
    int id,n,i,j,m,q;
    system("cls");
    printf("\n=====================================================\n");
    printf("\tWelcome to Product Management System\n");
    printf("=======================================================\n");
    user_display();
    printf ("how much product you want to buy?\n");
    scanf ("%d",&m);
    for (j=1; j<=m; j++)
    {
        fflush(stdin);

        FILE *fp;
        struct bill t1;
        struct Product t2;
        fp=fopen(fbill,"ab");
        printf("\n\nEnter the Product ID to purchase:  ");
        scanf("%d",&id);
        printf("How qty you want: \n");
        scanf("%d",&n);
        q=n;
        for(i=1; i<=n; i++)
        {
            t2=findProduct(id);
            t1.pid=t2.id;
            strcpy(t1.pname,t2.name);
            t1.pprice=t2.price;
            fwrite(&t1,sizeof(t1),1,fp);
            fclose(fp);
        }
        fflush(stdin);
    }

}

struct Product findProduct(int id)
{
    FILE *fp;
    struct Product t;
    fp=fopen(fproduct,"rb");
    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(t.id==id)
        {
            updateProduct(id,t.qty-1);
            break;
        }
    }
    fclose(fp);
    return t;
}

void updateProduct(int id,int qty)
{
    FILE *fp, *fp1;
    struct Product t,t1;
    int found=0;
    fp=fopen(fproduct,"rb");
    fp1=fopen("temp.dat","wb");
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
            t.qty=qty;
            fwrite(&t,sizeof(t),1,fp1);
        }
        else
        {
            fwrite(&t,sizeof(t),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if(found=0)
    {
        printf("Sorry No Record Found\n\n");
    }
    else
    {
        fp=fopen(fproduct,"wb");
        fp1=fopen("temp.dat","rb");
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

void delet()
{
    FILE *fp,*fp1;
    struct Product t;
    int id;
    int found=0,count=0;
    fp=fopen("product.dat","r");
    fp1=fopen("shocart.dat","w");
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
        fp=fopen("product.dat","w");
        fp1=fopen("shocart.dat","r");
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


void generateBill()
{
    FILE *fp, *fp1;
    struct bill t;
    int id,found=0;
    char ch1;
    int brel=0;
    char billname[20];
    system("cls");
    fp=fopen(fbill,"rb");
    printf("\n====================================\n");
    printf("\t\t Bill Details \n\n");
    printf("\n====================================\n");
    printf("Pro-ID\tPro-Name\tPro-price\n\n");
    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("%d\t",t.pid);
        printf("%s\t",t.pname);
        printf("%d\t\t\t\n",t.pprice);
        total=total+t.pprice;
    }
    printf("\n\n==============>>>Total Bill Amount [ Taka : %d ]\n\n",total);
    fclose(fp);
    if(total!=0)
    {
        fflush(stdin);
        printf("\nDo you want to generate Final Bill [Y/N]: ");
        scanf("%c",&ch1);
        if(ch1=='Y')
        {
            brel=billfileno();
            sprintf(billname,"%s%d","",brel);
            strcat(billname,".dat");
            fp=fopen(fbill,"rb");
            fp1=fopen(billname,"wb");
            while(1)
            {
                fread(&t,sizeof(t),1,fp);
                if(feof(fp))
                {
                    break;
                }
                fwrite(&t,sizeof(t),1,fp1);
            }
            fclose(fp);
            fclose(fp1);
            fp=fopen(fbill,"wb");
            fclose(fp);
            total=0;
        }
    }
    else
    {
        printf("\n\n Sorry item selected\n\n");
    }
}

int billfileno()
{
    FILE *fp;
    int value=0;
    fp=fopen("billno.txt","r");
    if(fp==NULL)
    {
        fp=fopen("billno.txt","w");
        fprintf(fp,"%d",0);
        fclose(fp);
        fp=fopen("billno.txt","r");
    }
    fscanf(fp,"%d",&value);
    fclose(fp);
    fp=fopen("billno.txt","w");
    fprintf(fp,"%d",value+1);
    fclose(fp);
    return value+1;
}

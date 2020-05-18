#include<stdio.h>
#include<string.h>
void login();
void cyber();
void admin();
int main()
{
    login();
    return 0;
}
void login()
{
    int usid,i,n,a,b,op,c,p;
    char usname[10],pass[10],gusname[10],gpass[10],gcpass[10];
    int arr[100],ch;
    char u1[]="aaa",p1[]="123", u2[]="abc",p2[]="***";
    printf("\n\t\t\t\t\t\tLog in screen\n");
    printf("\n\t\t\t\t\t\tserver client\n");
    printf("\n\t\t\t\t\t\tserver ABC\n\n");
    printf("\n\t\t\t\t\t\t1. log in as user\n \n\t\t\t\t\t\t2. log in as guest\n \n\t\t\t\t\t\t3. Admin Panel\n");
    printf("\nSelect an option :: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        system("cls");
        printf("\n\n\t\t\t\t\t\tUser ID: ");
        scanf("%d",&usid);
        printf("\n\n\t\t\t\t\t\tUsername: ");
        scanf("%s",usname);
        printf("\n\n\t\t\t\t\t\tPassword: ");
        scanf("%s",pass);

        if(usid==01)
        {
            a=strcmp(u1,usname);
            b=strcmp(p1,pass);
            if(a==0&&b==0)
                system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY\n");
            cyber();
        }
        else if(usid==02)
        {
            a=strcmp(u2,usname);
            b=strcmp(p2,pass);
            if(a==0&&b==0)
                system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY\n");
            cyber();
        }
        else if(usid==07)
        {
            a=strcmp(usname,gusname);
            b=strcmp(pass,gpass);
            if(a==0&&b==0)
                system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\t\tWELCOME, HAVE A NICE DAY\n");
            cyber();
        }

///--------------------------------------------------------------------------------------------
        else
        {
            system("cls");
            printf("\n\t\t\t\tWrong PASSWORD or Username.\n");
            delay(1200);
            login();
        }
        break;
    case 2:
        system("cls");
        printf("\n\t\t\t\t\t\t\tWelcome cyber service\n");
        printf("\n\t\t\t\t\t\tPlease Register Now\nr");
        printf("\n\n\t\t\t\t\tPlease Enter Username: ");
        scanf("%s",gusname);
        printf("\n\t\t\t\t\t\tPlease Enter Password: ");
        scanf("%s",gpass);
        printf("\n\n\t\t\t\t\tPlease Enter Confirm Password: ");
        scanf("%s",gcpass);
        printf("\n\n\t\t\tYOU HAVE REGISTERED SUCCESSFULLY!!");
        printf("\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
        printf("\n\t\t\t\tNow You Are Our Member");
        printf("\n\t\t\t\tYour User ID is:  07\n");
        printf("\n\t\t\t\tYour Username is:  %s\n",gusname);
        printf("\n\t\t\t\tPassword is:  %s\n",gpass);
        printf("\nNow You Can Login:\n");
        login();
        break;
    case 3:
        system("cls");
        printf("\n\t\t\t\tPlease Enter your User ID & Password:\n");
        printf("\n\t\t\t\t\t\tUser ID: ");
        scanf("%d",&usid);
        printf("\n\n\t\t\t\t\t\tUsername: ");
        scanf("%s",usname);
        printf("\n\n\t\t\t\t\t\tPassword: ");
        scanf("%s",pass);
        if(usid==01)
        {
            a=strcmp(u1,usname);
            b=strcmp(p1,pass);
            if(a==0&&b==0)
                system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME To Admin Panel\n");
            admin();
        }
        else if(usid==02)
        {
            a=strcmp(u2,usname);
            b=strcmp(p2,pass);
            if(a==0&&b==0)
                system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME To Admin Panel\n");
            admin();
        }
        else
        {
            system("cls");
            printf("\n\t\t\t\tWrong PASSWORD or Username.\n");
            delay(1200);
            login();
        }
        break;

    default:
        system("cls");
        printf("Invalid Choice! Please Try Again.\n");
        login();
    }
}
void admin()
{
    int op,p;
    printf("\n\t\t\t\tSETTINGS\n");
    printf("\t\t\t\t\t1. Services\n");
    printf("\t\t\t\t\t2.cost\n");
    printf("\t\t\t\t\t3.Add Member\n");
    printf("\t\t\t\t\t4.Admin Setting\n");
    printf("press 0 to go Main Menu: \n");
    printf("Enter Your choice: ");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        system("cls");
        printf("1. Add Services\n");
        printf("2. View Services\n");
        printf("3. Edit Services\n");
        printf("4. Search Services\n");
        printf("5. Delete Services\n");
        printf("Enter 6 to go Admin Panel\n");
        scanf("%d",&p);
        if(p==6)
        {
            system("cls");
            admin();
        }
        break;
    case 2:
        system("cls");
        printf("1.Set cost\n");
        printf("2.view cost\n");
        printf("Enter 3 to go Admin Panel\n");
        scanf("%d",&p);
        if(p==3)
        {
            system("cls");
            admin();
        }
        break;
    case 3:
        system("cls");
        printf("1.Member User ID\n");
        printf("2.Member User Name\n");
        printf("3.Member Password\n");
         printf("Enter 4 to go Admin Panel\n");
        scanf("%d",&p);
        if(p==4)
        {
            system("cls");
            admin();
        }
    case 4:
        system("cls");
        printf("1.Change Admin ID\n");
        printf("2.Change Admin Username\n");
        printf("3.Change Admin Password\n");
        printf("Enter 4 to go Admin Panel\n");
        scanf("%d",&p);
        if(p==4)
        {
            system("cls");
            admin();
        }
    case 0:
        system("cls");
        login();
        break;
    default:
        system("cls");
        printf("Invalid Choice\n");
         admin();
    }
}
void cyber()
{
    int c,p;
    printf("\n\t\t\t\t\t\tcyber management system\n");
    printf("\n\t\t\t\t\t\t1.Career path cyber sequrity\n");
    printf("\n\t\t\t\t\t\t2.Cyber sequrity sallery\n");
    printf("\nSelect an option :: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        system("cls");
        printf("\n\n\t\t\t\t\t\t1.Chief Information Security Officer ");
        printf("\n\n\t\t\t\t\t\t2.Forensic Computer Analyst ");
        printf("\n\n\t\t\t\t\t\t3.Information Security Analyst ");
        printf("\n\n\t\t\t\t\t\t4.Penetration Tester ");
        printf("\n\n\t\t\t\t\t\t5.Security Architect ");
        printf("\n\n\t\t\t\t\t\t6.IT Security Engineer ");
        printf("\n\n\t\t\t\t\t\t7.Security Systems Administrator ");
        printf("\n\n\t\t\t\t\t\t8.IT Security Consultant ");
        printf("\npress 0 to go Main Menu: \n");
        scanf("%d",&p);
        if (p==0)
        {
            system("cls");
            login();
        }
        break;

    case 2:
        system("cls");
        printf("\n\n\t\t\t\t\t\t1.Chief Information Security Officer :$143,334 ");
        printf("\n\n\t\t\t\t\t\t2.Security Director :$124,624 ");
        printf("\n\n\t\t\t\t\t\t3.Security Architect:$113,905 ");
        printf("\n\n\t\t\t\t\t\t4.Security Engineer :$89,209 ");
        printf("\n\n\t\t\t\t\t\t5.IT Security Consultant :$81,980 ");
        printf("\npress 0 to go Main Menu: \n");
        scanf("%d",&p);
        if (p==0)
        {
            system("cls");
            login();
        }
        break;
    default:
        system("cls");
        printf("Invalid Choice! Please Try Again.\n");
        cyber();
    }
}


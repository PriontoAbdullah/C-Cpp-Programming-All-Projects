#include<stdio.h>
int main()
{
    int usid,i,n,a,b;
    char usname[10],pass[10],gusname[10],gpass[10],gcpass[10];
    int arr[100],ch;
    char u1[]="aaa",p1[]="123", u2[]="abc",p2[]="***";
    printf("\n\t\t\t\t\t\tLog in screen\n");
    printf("\n\t\t\t\t\t\tserver client\n");
    printf("\n\t\t\t\t\t\tserver ABC\n\n");
    printf("\n\t\t\t\t\t\t1. log in as user\n \n\t\t\t\t\t\t2. log in as guest\n");
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
                printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
        }
        else if(usid==02)
        {
            a=strcmp(u2,usname);
            b=strcmp(p2,pass);
            if(a==0&&b==0)
                printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
        }
        else if(usid==07)
        {
            a=strcmp(u2,gusname);
            b=strcmp(p2,gpass);
            if(a==0&&b==0)
                printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
        }
        else
        {
            printf("\nWrong PASSWORD or Username.");
        }


///--------------------------------------------------------------------------------------------


        break;
    case 2:
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\tWelcome cyber service\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\tPlease Register Now\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\t\t\t\t\tPlease Enter Username: ");
        scanf("%s",gusname);
        printf("\n\n\t\t\t\t\t\tPlease Enter Password: ");
        scanf("%s",gpass);
        printf("\n\n\t\t\t\t\t\tPlease Enter Confirm Password: ");
        scanf("%s",gcpass);
        printf("\n\n\n\t\t\tYOU HAVE REGISTERED SUCCESSFULLY!!");
        printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
        printf("\n\n\n\t\t\t\tNow You Are Our Member");
        printf("\n\n\n\t\t\t\tYour User ID is:  07\n");
        printf("\n\n\n\t\t\t\tYour Username is:  %s\n",gusname);
        printf("\n\n\n\t\t\t\tPassword is:  %s\n",gpass);
        break;
    default:
        printf("Invalid Choice! Please Try Again.");
    }
    return 0;
}


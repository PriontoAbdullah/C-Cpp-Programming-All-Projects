#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9

void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
	wColor=(csbi.wAttributes & 0xF0)+(ForgC & 0x0F);
//	SetConsoleTextAttributes(hStdOut,wColor);
	SetConsoleTextAttribute(hStdOut,wColor);
	
}
}


struct item
{
	char productname[40],productcomp[40],c;
	int productid;
	int price;
	int Qnt;
}st;

void wel_come(void);
void title(void);
void login();
void menu(void);
void title(void);
void deleteproduct(void);
void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void add_item();
void read_item();
void search_item();
void edit_item();
void total_bill();
void main(void)

{
wel_come(); //call for welcome screen function
login(); //call for login function
}



void wel_come(void)

{
	time_t t;
	time(&t);
	printf("                                                                                                         \n");
	printf("---------------------------------------------------------------------------------------------------------\n");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xbd\t     WELCOME TO \t \xbd\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xbd\tABC CLOTHING STORE\t \xbd\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t          Contact Info      \t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t      \"WHERE QUALITY MATTERS\"\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
		printf("\t\t\t\t\t%s",ctime(&t));
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");	
	printf("\n\t\t\tPress any key to continue.........\t\t\t\t\t\t\t\t\t\t\n");
	 
getch();
system("cls");
}

void login()
{

int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	
    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n                        USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                        PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME TO CLOTHING STORE MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n SYSTEM IS LOADING. PLEASE WAIT... \n");
    for(i=0; i<3; i++)
    {
        printf(".");
        Sleep(500);
    }
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();//holds the screen
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");
		menu();	
}
	
	

void menu(void)
{
	int choice;
	system("cls");
	main:
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Clothing Store Management System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] To Add Items");
	printf("\n\t\tEnter [2] To Delete Items");
	printf("\n\t\tEnter [3] To Search Items");
	printf("\n\t\tEnter [4] To View Items");
	printf("\n\t\tEnter [5] To Edit Items");
	printf("\n\t\tEnter [6] To Calculate Bill");
	printf("\n\t\tEnter [7] To Exit!");	
	
	printf("\n\n\t\tEnter your choice[1-6]");
	scanf("%i", &choice);
	
	system("cls");
	
	switch(choice)	
	{
		case 1:
			add_item();
			break;
		case 2:
			deleteproduct();
			break;
		case 3:
		search_item();
			break;
		case 4:
		read_item();
			break;	
		case 5:
			edit_item();
			break;
		case 6:
			total_bill();
			break;
		case 7:
		printf("System Exit");
		exit(0);
		break;
			
		
		default:
		printf("Invalid Choice! System Exit\n");
			getch();
	}
	
}

void add_item()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;
	

	do
	{
		system("cls");
		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Enter Item Details \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("NextFile.dat","a+");//opening file and creating a staff.txt file to append or write
		
		if((fp = fopen("NextFile.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nItem Code\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&st.productid);
		}
		
	//add product name
		do
		{
		
			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nItem Name\t :");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			
				
			}
		}while(!valid);	//while end here
		

		//Product Company
			do
		{
			char productcomp[40];
			fflush(stdin);
			printf("\nItem Brand\t :");
			gets(st.productcomp); // get input string
			st.productcomp[0]=toupper(st.productcomp[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productcomp); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productcomp[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			
				
			}
		}while(!valid);
		
		//productid
		do
			{
				printf("\nPrice [10-5000]Rupees:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);
			
				do
			{
				printf("\nQuantity [1-500]\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);
	
	//	printf("\nProduct Price\t :");
	//	scanf("%i", &st.price);
		//printf("\nProduct ID\t :");
		//scanf("%i", &st.productid);
	//	printf("\nProduct Quantity :");
	//	scanf("%i",&st.Qnt);
		
		fp=fopen("NextFile.dat","a");
		fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");
		
	}
	while((c = getch()) =='\r');
	menu();
}


void search_item()
{
	char target[40];
	int found=0;
	FILE *sfile;
	sfile=fopen("NextFile.dat","r");
	printf("\nEnter name to search:");
	fflush(stdin);
	gets(target);
	target[0]=toupper(target[0]);
	while (!feof(sfile) && found==0)
	{
		fscanf(sfile,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt);
		if(strcmp(target, st.productname)==0)
		{
			found=1;		
		}
	}
	
	if(found)
	{
		printf("\n Record found");
		printf("\nItem's Name\t\t:%s  \nItem's Brands\t\t:%s \nItem's Price\t\t:%i \nItem ID\t\t:%i \nItem Quantity\t:%i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
	
	}
	else 
		printf("Noo Record found");
		fclose(sfile);
		printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();
		
}

void deleteproduct(void)
{
	char target[40]; 
	int found=0;
	FILE *sfile, *tfile;
	sfile=fopen("NextFile.dat","r");
	tfile=fopen("TempFile.dat","w+");
	printf("\n Enter name to Delete: ");
	fflush(stdin);
	scanf("%s",target);
	target[0]=toupper(target[0]);
	while (fscanf(sfile,"%s %s %i %i %i\n",st.productname,st.productcomp, &st.price,&st.productid,&st.Qnt)!=EOF)
	{
		if(strcmp(target,st.productname)==0)
		{
			found=1;
		}
		else
		{
			fprintf(tfile,"%s %s %i %i %i\n", st.productname,st.productcomp, st.price,st.productid,st.Qnt);
		}
	}
			if(!found)
			{
				printf("\n Record not Found");
				getch();
				menu();
			}
			else
			{
				printf("\n Record deleted");	
			}
			fclose(sfile);
			fclose(tfile);
			remove("NextFile.dat");
			rename("TempFile.dat","NextFile.dat");
			
			printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();
}


void total_bill()
{ 
  float total_amount, amount, sub_total, discount_amount, tax_amount, quantity, value, discount, tax; 
 
  printf("\n Enter the quantity of item sold: "); 
  scanf ("%f", &quantity) ; 
  printf("\n Enter the value of item: "); 
  scanf("%f", &value); 
  printf("\n Enter the discount percentage: "); 
  scanf("%f", &discount); 
  printf (" \n Enter the tax: ") ; 
  scanf ("%f", &tax) ; 
  amount = quantity * value; 
  discount_amount = (amount* discount)/100.0; 
  sub_total =amount - discount_amount; 
  tax_amount= (sub_total*tax) /100.0; 
  total_amount =sub_total+ tax_amount; 
  printf (" \n\n\n \xdb\xdb\xdb\xdb\xdb BILL \xdb\xdb\xdb\xdb\xdb ") ; 
  printf("\nQuantitySold: %f", quantity); 
  printf("\nPriceperitem: %f", value); 
  printf (" \n -------------") ; 
  printf ("\nAmount: %f", amount); 
  printf (" \n Discount: - %f", discount_amount) ; 
  printf ("\n Discounted Total: %f", sub_total) ; 
  printf ("\n Tax:+ %f", tax_amount); 
  printf("\n-------------"); 
  printf ("\n Total Amount %f", total_amount); 
  getch(); 
  menu();
} 



void read_item()
{
	FILE *f;
	int i, q;
	if((f=fopen("NextFile.dat","r"))==NULL)
	{
	
		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{
	
		gotoxy(0,5);
			for(i=0;i<100;i++)
		{
			printf("\xdb");
		}
		gotoxy(5,6);
		printf("Item's Name");
		gotoxy(25,6);
		printf("Item's Price");
		gotoxy(40,6);
		printf("Item's Brand");
		gotoxy(60,6);
		printf("Item's CODE");
		gotoxy(80,6);
		printf("Item's Quantity\n");
		
		for(i=0;i<100;i++)
		{
			printf("\xdb");
		}
		q=8;
		while(fscanf(f,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%s",st.productcomp);
			gotoxy(60,q);
			printf("%i",st.productid);
			gotoxy(80,q);
			printf("%i",st.Qnt);
	
			q++;
		}
		printf("\n");
		for(i=0;i<100;i++)
			printf("\xdb");
	}
	fclose(f);
	
	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
		menu();
}

void edit_item()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("NextFile.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		system("cls");
		printf("Enter Item's' Code for edit:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
			{
				
				a=1;
				printf("\n\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb");
				printf("\nItem's Name\t\t: %s",st.productname);
				printf("\nItems's Brand\t\t: %s",st.productcomp);
				printf("\nPrice\t\t\t: %i",st.price);
				printf("\nItem's Code\t\t: %i",st.productid);
				printf("\nItem's Quantity\t:%i",st.Qnt);
			
				printf("\n\n\t*** New Record ***");
			do
				{
					
					fflush(stdin);
					printf("\nNew Item's Name\t\t: ");
					gets(st.productname); // get input string
					st.productname[0]=toupper(st.productname[0]);
					//iterate for every character in string
					for (index=0; index<strlen(st.productname); ++index)
					{	//check if character is valid or not
						if(isalpha(st.productname[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();
					
						
					}
				}while(!valid);	//while end here
				
		
				//Product Company
				do
				{
					char productcomp[40];
					fflush(stdin);
					printf("\nNew Item's Brand\t\t:");
					gets(st.productcomp); // get input string
					st.productcomp[0]=toupper(st.productcomp[0]);
					//iterate for every character in string
					for (index=0; index<strlen(st.productcomp); ++index)
					{	//check if character is valid or not
						if(isalpha(st.productcomp[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();
					
						
					}
				}while(!valid);
				
					do
			{
				printf("\nNew Price [10-5000]Rupees:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);
			
				printf("\nEnter New Item's Code\t\t:");
				scanf("%i",&st.productid); 
				
				do
			{
				printf("\nNew Quantity [1-500]\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter New Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);
				
				
				printf("Press 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
				}
			}
			else
			{
				fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
				fflush(stdin);
			}
			
		}
		if(!a)
		{
			printf("\n\nTHIS ITEM DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("NextFile.dat");
		rename("TempFile.dat","NextFile.dat");
		getch();
	}
	menu();
}

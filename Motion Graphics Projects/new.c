#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct emp
{
int id;
char name[20];
int salary;
};

void append();
void display();
void displayAll();
void modify();
void del();
void search();

void rname();
void rremove();

char mygetch();

char fname[]={"mydb.dat"};

int main()
{
int ch;

while(1)
{
system("clear"); //clrscr();

printf("==================Employee Management System=============\n\n");

printf("1. Append\n\n");
printf("2. Modify\n\n");
printf("3. Delete\n\n");
printf("4. Search\n\n");
printf("5. Display\n\n");
printf("6. Display All\n\n");
printf("7. Rename\n\n");
printf("8. Delete File\n\n");
printf("0. Exit\n\n");

printf("========================================================\n\n");

printf("\nPlease enter your Choice:");
scanf("%d",&ch);

switch(ch)
{
case 1: append();
break;

case 2: modify();
break;

case 3: del();
break;

case 4: search();
break;

case 5: display();
break;

case 6: displayAll();
break;

case 7: rname();
break;

case 8: rremove();
break;

case 0: exit(0);
}

mygetch();
}

return 0;
}
void append()
{
FILE *fp;
struct emp t1;

fp=fopen(fname,"ab");

printf("\nEnter ID:");
scanf("%d",&t1.id);
printf("\nEnter name:");
scanf("%s",t1.name);
printf("\nEnter salary:");
scanf("%d",&t1.salary);
fwrite(&t1,sizeof(t1),1,fp);

fclose(fp);
}

void rname()
{
char name[20];

printf("\nEnter the New File Name:");
fflush(stdin);
scanf("%[^\n]",name);

rename(fname,name);

strcpy(fname,name);
}

void rremove()
{
FILE *fp,*fp1;
struct emp t;

char name[20];
char val[20];

printf("\nDo you want to make copy of it (Y/N):");
scanf("%s",val);

if(strcmp(val,"Y")==0)
{

printf("\nEnter the New File Name:");
fflush(stdin);
scanf("%[^\n]",name);

fp=fopen(name,"wb");
fp1=fopen(fname,"rb");

while(1)
{
fread(&t,sizeof(t),1,fp1);

if(feof(fp1))
{
break;
}
fwrite(&t,sizeof(t),1,fp);
}

fclose(fp);
fclose(fp1);

remove(fname);

strcpy(fname,name);
}
else
{
remove(fname);
}
}

void modify()
{
FILE *fp,*fp1;
struct emp t,t1;
int id,found=0,count=0;

fp=fopen(fname,"rb");
fp1=fopen("temp.dat","wb");

printf("\nEnter the Emp ID you want to Modify:");
scanf("%d",&id);

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
printf("\nEnter Employee ID:");
scanf("%d",&t.id);

fflush(stdin);
printf("\nEnter Employee Name:");
scanf("%s",t.name);
printf("\nEnter Employee Salary:");
scanf("%d",&t.salary);
fwrite(&t,sizeof(t),1,fp1);
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
printf("Sorry No Record Found\n\n");
}
else
{
fp=fopen(fname,"wb");
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

void del()
{
FILE *fp,*fp1;
struct emp t,t1;
int id,found=0,count=0;

fp=fopen(fname,"rb");
fp1=fopen("temp.dat","wb");

printf("\nEnter the Emp ID you want to Delete:");
scanf("%d",&id);

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
printf("Sorry No Record Found\n\n");
}
else
{
fp=fopen(fname,"wb");
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

void display()
{
FILE *fp;
struct emp t;
int id,found=0;

fp=fopen(fname,"rb");

printf("\nEnter the Emp ID:");
scanf("%d",&id);

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
printf("\n========================================================\n\n");
printf("\t\t Employee Details of %d\n\n",t.id);
printf("========================================================\n\n");

printf("Name\tSalary\n\n");

printf("%s\t",t.name);
printf("%d\t\n\n",t.salary);

printf("========================================================\n\n");
}
}
if(found==0)
{
printf("\nSorry No Record Found");
}
fclose(fp);
}

void search()
{
FILE *fp;
struct emp t;
int found=0;
char name[20];

fp=fopen(fname,"rb");

printf("\nEnter the Employee Name:");
scanf("%s",&name);

while(1)
{
fread(&t,sizeof(t),1,fp);

if(feof(fp))
{
break;
}
if(strcmp(name,t.name)==0)
{
printf("\n========================================================\n\n");
printf("\t\t Employee Details of %d\n\n",t.id);
printf("========================================================\n\n");

printf("Name\tSalary\n\n");

printf("%s\t",t.name);
printf("%d\t\n\n",t.salary);

printf("========================================================\n\n");

}
}
if(found==0)
{
printf("\nSorry No Record Found");
}
fclose(fp);
}
void displayAll()
{
FILE *fp;
struct emp t;

fp=fopen(fname,"rb");

printf("\n========================================================\n\n");
printf("\t\t All Employee Details\n\n");
printf("========================================================\n\n");

printf("ID\tName\tSalary\n\n");

while(1)
{
fread(&t,sizeof(t),1,fp);

if(feof(fp))
{
break;
}
printf("%d\t",t.id);
printf("%s\t",t.name);
printf("%d\t\n\n",t.salary);

}
printf("========================================================\n\n");

fclose(fp);
}

char mygetch()
{
char val;
char rel;

scanf("%c",&val);
scanf("%c",&rel);
return (val);
}

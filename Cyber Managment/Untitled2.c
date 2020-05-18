#include<stdio.h>
#include<conio.h>
#include<string.h>
struct std
{
   char name[50];
   char city[50];
   char sub[50];
   int marks;
   long int roll;

   struct std *link;
}*start=NULL,*tmp,*ptr;
void main()
{
   int ch;
   clrscr();
   while(ch!=3)
   {
      printf("\nEnter your choice");
      printf("\n****MENU****");
      printf("\n1.create");
      printf("\n2.display");
      printf("\n3.exit\n");
      scanf("%d",&ch);
      switch (ch)
      {
         case 1:
            record();
            break;

         case 2:
            display();
            break;

         case 3:
            exit();
            break;

         default:
            printf("wrong choice");
      }
   }
   getch();
}

record()
{
   char nam[50],cit[50],subj[30];
   tmp=(struct std*)malloc(sizeof(struct std));
   printf("\nEnter Student name:" );
   fflush(stdin);
   gets(nam);
   strcpy(tmp->name, nam);
   printf("\nEnter subject of student: ");
   fflush(stdin);
   gets(subj);
   strcpy(tmp->sub, subj);
   printf("\nEnter City of student: ");
   fflush(stdin);
   gets(cit);
   strcpy(tmp->city, cit);
   printf("\nEnter Marks of Student: ");
   scanf("%d",&(tmp->marks));
   printf("\nEnter Roll Number of Student: ");
   scanf("%ld", &(tmp->roll));
   fflush(stdin);
   tmp->link=NULL;
   if(start==NULL)
   {
      start=tmp;
   }
   else
   {
      ptr=start;
      while(ptr!=NULL)
      {
         ptr=ptr->link;
         ptr->link=tmp;
      }}
}

display()
{
   if(start==NULL)
   {
      printf("list empty\n");
   }
   else
   {
      ptr=start;
      while(ptr!=NULL)
      {
         printf("Name of the student: ");
         puts(tmp->name);
         printf("subject of Student: ");
         puts(tmp->sub);
         printf("city of student: ") ;
         puts(tmp->city);
         printf("marks of student: %d\nRoll No of student: %ld",(tmp->marks),(tmp->roll));
         ptr=ptr->link;
      }
   }
}

#include<stdio.h>

struct employee
{
	int eid;
	char ename[100];
	int selery;
    

};
main()
{
  struct employee  e1,e2,e3;
printf("\nEnter e1's detail =>");
scanf("%d",&e1.eid);
fflush(stdin);
printf("\nEnter e1's ename =>");
gets(e1.ename);
printf("\nEnter e1's selery =>");
scanf("%d",&e1.selery);


  printf("\nenter e2's detail =>");
  scanf("%d",&e2.eid);
  fflush(stdin);
  printf("\nenter e2's ename =>"); 
  gets(e2.ename);
  printf("\nEnter e2's selery =>");
  scanf("%d",&e2.selery);


  printf("\nenter e3's detail =>");
  scanf("%d",&e3.eid);
  fflush(stdin);
  printf("\nenter e3's ename =>"); 
  gets(e3.ename);
  printf("\nEnter e3's celery =>");
  scanf("%d",&e3.selery);


printf("\ne1's id = %d\tename = %s\tselery = %d",e1.eid,e1.ename,e1.selery);
printf("\ne2's id = %d\tename = %s\tselery = %d",e2.eid,e2.ename,e2.selery);
printf("\ne3's id = %d\tename = %s\tselery = %d",e3.eid,e3.ename,e3.selery);
}
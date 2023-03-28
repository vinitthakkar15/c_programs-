/*#include<stdio.h>

struct movie
{
	int mid;
	char mname[100];
	int year;
};

main()
{
struct movie m1,m2,m3;

printf("\nEnter m1's detail =>");
scanf("%d",&m1.mid);
fflush(stdin);
printf("\nEnter m1's mname =>");
gets(m1.mname);
printf("\nEnter m1's Release Year =>");
scanf("%d",&m1.year);


printf("\nEnter m2's detail =>");
scanf("%d",&m2.mid);
fflush(stdin);
printf("\nEnter m2's mname =>");
gets(m2.mname);

printf("\nEnter m2's Release Year =>");
scanf("%d",&m2.year);


printf("\nEnter m3's detail =>");
scanf("%d",&m3.mid);
fflush(stdin);
printf("\nEnter m3's mname =>");
gets(m3.mname);

printf("\nEnter m3's Release Year =>");
scanf("%d",&m3.year);

printf("\nm1's id = %d\tmname = %s\tyear = %d",m1.mid,m1.mname,m1.year);
printf("\nm1's id = %d\tmname = %s\tyear = %d",m2.mid,m2.mname,m2.year);
printf("\nm1's id = %d\tmname = %s\tyear = %d",m3.mid,m3.mname,m3.year);

}*/

#include<stdio.h>
struct employee
{
	int eid;
	char ename[100];
	int salary;
};
main()
{
	struct employee e1,e2,e3;
	printf("\n enter e1's id");
	scanf("%d",&e1.eid);
	fflush(stdin);
	printf("\n enter e1's name");
	gets(e1.ename);
	printf("\n enter e1's salary");
	scanf("%d",&e1.salary);

   printf("\n enter e2's id");
	scanf("%d",&e2.eid);
	fflush(stdin);
	printf("\n enter e2's name");
	gets(e2.ename);
	printf("\n enter e2's salary");
	scanf("%d",&e2.salary);

    printf("\n enter e3's id");
	scanf("%d",&e3.eid);
	fflush(stdin);
	printf("\n enter e3's name");
	gets(e3.ename);
	printf("\n enter e3's salary");
	scanf("%d",&e3.salary);


	printf("\n e1 's id = %d \tename = %s \tsalary = %d",e1.eid,e1.ename,e1.salary);
	printf("\n e2 's id = %d \tename = %s \tsalary = %d",e2.eid,e2.ename,e2.salary);
	printf("\n e3 's id = %d \tename = %s \tsalary = %d",e3.eid,e3.ename,e3.salary);






	}







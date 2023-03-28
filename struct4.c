#include<stdio.h>
struct employee
{
	int eid;
	char ename[100];
	int salary;
};
main()
{
	struct employee e[100];
	int n,i;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("\n enter e's detail=>");
		scanf("%d",&e[i].eid);
		fflush(stdin);
		printf("\n enter the e's name=>");
		gets(e[i].ename);
		printf("\n enter the e's salary");
		scanf("%d",&e[i].salary);
	}
	
	printf("\nEid\tEname\tSalary");
	printf("\n=====================");
	for(i=0;i<n;i++)
	{
	printf("\n%d\t%s\t%d",e[i].eid,e[i].ename,e[i].salary);
	}
	printf("\n=====================");
}
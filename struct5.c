#include<stdio.h>

struct movie
{
    int mid;
    char mname[100];
    int year;
	int n,i;
};
main()
{
    struct movie m[100];
	int n,i;

   printf("\nEnter limit =>");
	scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n enter e's detail=>");
		scanf("%d",&m[i].mid);
		fflush(stdin);
		printf("\n enter the e's name=>");
		gets(m[i].mname);
		printf("\n enter the e's year");
		scanf("%d",&m[i].year);
    }
     printf("\nmid\tname\tyear");
     printf("\n========================");
     for(i=0;i<n;i++)
     {
        printf("\n%d\t%s\t%d",m[i].mid,m[i].mname,m[i].year);
     }
        printf("%d=======================");
}
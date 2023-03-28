#include<stdio.h>
struct student
{
	int sid;
	char sname[100];
	int english;
	int hindi;
};
main()
{
	struct student s[100];
	int i,n,c=0,m;
	
	printf("\n enter the limit=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the stud's detali=>");
		scanf("%d",&s[i].sid);
		fflush(stdin);
		printf("\n enter the stud's name=>");
		gets(s[i].sname);
		printf("\n enter the english marks=>");
		scanf("%d",&s[i].english);
		printf("\n enter the hindi marks=>");
		scanf("%d",&s[i].hindi);
	}
	printf("\nsid\tsname\tenglish\thindi\ttotal marks");
	printf("\n=============================================");
	
	for(i=0;i<n;i++)
	{
		printf("\n%d \t%s \t%d \t%d \t Pass",s[i].sid,s[i].sname,s[i].english,s[i].hindi);
	}
		
	printf("\n===========================================");
	printf("\nsearch the value in structure=>");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
    	if(s[i].sid==m)
    	{
    		
    	printf("\n%d \t%s \t%d \t%d \t Pass",s[i].sid,s[i].sname,s[i].english,s[i].hindi);
	}	
    		c++;
		
	}
	if(c==0)
	{
		printf("\nSorry not found");
	}

}
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
	int i,n,total,p=0,f=0;
	
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
		total=s[i].english+s[i].hindi;
		if(total>18)
		{
		printf("\n%d \t%s \t%d \t%d \t%d\t Pass",s[i].sid,s[i].sname,s[i].english,s[i].hindi,total);
		p++;
		}
		else
		{
		printf("\n%d \t%s \t%d \t%d \t%d\t Fail",s[i].sid,s[i].sname,s[i].english,s[i].hindi,total);	
		f++;
		}
}
		
		printf("\n===========================================");
		printf("\n%d is passes",p);
		printf("\n%d is fails",f);
}
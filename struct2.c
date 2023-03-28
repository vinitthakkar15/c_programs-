#include<stdio.h>

struct student
{
	int sid;
	char sname[100];
	int hindi;
    int english;
};
main()
{
struct student s1,s2,s3;

printf("\nEnter s1's detail =>");
scanf("%d",&s1.sid);
fflush(stdin);
printf("\nEnter s1's sname =>");
gets(s1.sname);
printf("\nEnter s1's hindi marks =>");
scanf("%d",&s1.hindi);
printf("\nEnter s1's english marks =>");
scanf("%d",&s1.english);


printf("\nEnter s2's detail =>");
scanf("%d",&s2.sid);
fflush(stdin);
printf("\nEnter s2's sname =>");
gets(s2.sname);
printf("\nEnter s2's hindi marks =>");
scanf("%d",&s2.hindi);
printf("\nEnter s2's english marks =>");
scanf("%d",&s2.english);


printf("\nEnter s3's detail =>");
scanf("%d",&s3.sid);
fflush(stdin);
printf("\nEnter s3's sname =>");
gets(s3.sname);
printf("\nEnter s3's hindi marks =>");
scanf("%d",&s3.hindi);
printf("\nEnter s3's english marks =>");
scanf("%d",&s3.english);


printf("\ns1's id = %d\tsname = %s\thindi=%d\tenglish= %d",s1.sid,s1.sname,s1.hindi,s1.english);
printf("\ns2's id = %d\tsname = %s\thindi=%d\tenglish= %d",s2.sid,s2.sname,s2.hindi,s2.english);
printf("\ns3's id = %d\tsname = %s\thindi=%d\tenglish= %d",s3.sid,s3.sname,s3.hindi,s3.english);
}
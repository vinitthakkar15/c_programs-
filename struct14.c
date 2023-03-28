#include<stdio.h>

struct student
{
	int sid;
	int hindi;
    int english;
};

union stu
{
	int sid;
	int hindi;
    int english;
};

main()
{
struct student s1;
union stu s2;

printf("\n%d %d",sizeof(s1),sizeof(s2));


printf("\nEnter s1's detail =>");
scanf("%d",&s1.sid);
printf("\nEnter s1's hindi marks =>");
scanf("%d",&s1.hindi);
printf("\nEnter s1's english marks =>");
scanf("%d",&s1.english);

    printf("\ns1's id = %d\thindi=%d\tenglish= %d",s1.sid,s1.hindi,s1.english);

printf("\nEnter s2's detail =>");
scanf("%d",&s2.sid);
printf("\nEnter s2's hindi marks =>");
scanf("%d",&s2.hindi);
printf("\nEnter s2's english marks =>");
scanf("%d",&s2.english);

    printf("\ns2's id = %d\thindi=%d\tenglish= %d",s2.sid,s2.hindi,s2.english);
}
#include<stdio.h>
struct student
{
    int std;
    char sname[100];
    int english;
    int hindi;
    
};
main()
{
    struct student s[100];
    int n,i;

    printf("enter limit=>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
printf("\nEnter s[i]'s detail =>");
scanf("%d",&s[i].std);
fflush(stdin);
printf("\nEnter s[i]'s sname =>");
gets(s[i].sname);
printf("\nEnter s[i]'s english marks =>");
scanf("%d",&s[i].english);
printf("\nEnter s[i]'s hindi marks =>");
scanf("%d",&s[i].hindi);

    }
    printf("\nsid\tsame\tenglish\thindi");
    printf("\n============================");

    for(i=0;i<n;i++)
    {
        printf("\n%d \t%s \t%d \t%d\t%d",s[i].std,s[i].sname,s[i].english,s[i].hindi,s[i].english+s[i].hindi);
    }
    printf("\n===========================");
}

 
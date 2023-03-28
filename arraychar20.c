#include<stdio.h>
#include<string.h>
main()
{

 char name[100];
 int x;
 printf("\nenter name =>");
 gets(name);

 printf("\nName = %s",name);
 x=strlen(name);

 printf("\nLength = %d",x);
}
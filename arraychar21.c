#include<stdio.h>
#include<string.h>
main()
{
 char ch;
 char name[100];
 int x,i;
 printf("\nenter name =>");
 gets(name);

 printf("\nName = %s",name);
 x=strlen(name);

 for(i=0;i<x;i++)
 {
    ch=name[i];
    printf("\n%c",ch);
 }

}
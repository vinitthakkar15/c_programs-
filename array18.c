#include<stdio.h>
#include<string.h>
main()
{
 char ch;
 char name[100];
 int x,i,c=0;
 printf("\nenter name =>");
 gets(name);

 printf("\nName = %s",name);
 x=strlen(name);

 for(i=0;i<x;i++)
 {
    ch=name[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        c++;
    }
 }
         printf("\ntotal of vowel are %d",c);


}



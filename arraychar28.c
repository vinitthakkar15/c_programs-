#include<stdio.h>
#include<string.h>
main()
{
 char ch;
 char name[100];
 int x,i;
 printf("\nenter name =>");
 gets(name);

 x=strlen(name);

 for(i=0;i<x;i++)
 {
    ch=name[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
     printf("");   
    }
     else{
        printf("%c",ch);
     }    
 }

}
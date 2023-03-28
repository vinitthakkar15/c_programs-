#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
 char ch;
 char name[100];
 int x,i,u=0,l=0,o=0;
 printf("\nenter name =>");
 gets(name);

 
 x=strlen(name);

 for(i=0;i<x;i++)
 {
    ch=name[i];
    
	if(isupper(ch))
	{
		printf("%c",tolower(ch));
		u++;
	}
	else if(islower(ch))
	{
		printf("%c",toupper(ch));
		l++;
	}
	else
	{
		printf("%c",(ch));
		o++;
		
	}
 }

 printf("\nTotal upper %d lower %d Other %d",u,l,o);   

}
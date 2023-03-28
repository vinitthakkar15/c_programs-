#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
 char ch;
 char name[100];
 int i,x,u=0,l=0,o=0;
 printf("\nenter name =>");
 gets(name);

 x=strlen(name);

 for(i=0;i<x;i++)
 {
    ch=name[i];
    
	if(isupper(ch))
	{
		u++;
	}
	else if(islower(ch))
	{
		l++;
	}
	else
	{
		o++;
	}
 }

 printf("\nTotal upper %d lower %d Other %d",u,l,o);   

}
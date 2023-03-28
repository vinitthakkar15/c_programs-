#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int n,i,c=0;
	char ch;
	
	printf("\nEnter name =>");
	gets(name);
	
	n=strlen(name);
	
	for(i=0;i<n;i++)
	{
		ch=name[i];
	if(islower(ch))
		{
			printf("");
		}
		else
		{
			printf("%c",ch);
		}
	}

} 
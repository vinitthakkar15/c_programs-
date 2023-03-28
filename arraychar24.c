#include<stdio.h>
main()
{

	char ch;
	printf("\nEnter any character=>");
	scanf("%c",&ch);
	
	if(isupper(ch))
	{
		printf("character is in uppercase");
	}
	else if(islower(ch))
	{
		printf("character is in lowercase");
	}
	else
	{
		printf("\nother");
	}
}
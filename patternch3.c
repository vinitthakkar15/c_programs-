#include<stdio.h>
main()
{
	
	
	int no;
    char i,j;
	printf("\nenter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",i+96);
		}
		printf("\n");
	}

	
}

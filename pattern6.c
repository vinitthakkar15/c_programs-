#include<stdio.h>
main()
{
	
	
	int no,i,j;
	printf("\nenter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	
}
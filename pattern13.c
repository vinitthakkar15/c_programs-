#include<stdio.h>
main()
{
	
	
	int no,i,j;
	printf("\nenter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}

	
}
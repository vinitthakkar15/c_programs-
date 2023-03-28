#include<stdio.h>
main()
{
	
	
	int no,i,j;
	printf("\nenter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			if(i%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}

	
}
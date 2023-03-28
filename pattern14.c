#include<stdio.h>
main()
{
	int i,j;
	int n,k;
	
	printf("\nEnter number limit =>");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	
	{         
		for(j=1;j<=i;j++)
		{
		if(j%2==0)
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

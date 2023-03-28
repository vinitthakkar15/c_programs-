#include<stdio.h>
main()
{
	int i,j,k=1;
	int n;
	
	printf("\nEnter number limit =>");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
		
	}
}
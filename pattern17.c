#include<stdio.h>
main()
{
	int i,j;
	int n,k;
	
	printf("\nEnter number limit =>");
	scanf("%d",&n);
      k=n;
	for(i=1;i<=n;i++)
	{
       
    	for(j=1;j<=i;j++)
		 
		{
			printf("%d",k);
			
		}
		k--;
		printf("\n");
		
	}
}

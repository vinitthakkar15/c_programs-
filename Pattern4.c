#include<stdio.h>
main()
{
	int i,j;
	int n;
	
	printf("\nEnter number limit =>");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++) 
	{
		for(j=1;j<=n;j++) 
        {
                printf("%d",j);
        }
        printf("\n");
	}

    
}
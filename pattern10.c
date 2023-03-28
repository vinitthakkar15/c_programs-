 #include<stdio.h>
main()
{
	
	
	int no,i,j;
	printf("\nenter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)//123
	{
		for(j=1;j<=i;j++)//112123
		{
			printf("*");
		}
		printf("\n");
	}

	
}
#include<stdio.h>
#define N 3
main()
{
int i,j,s=0;
int a[N][N],b[N][N];

for(i=0;i<N;i++)
{
	for(j=0;j<N;j++)
	{
		printf("enter value for a =>");
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<N;i++)
{
	for(j=0;j<N;j++)
	{
		printf("enter value for b =>");
		scanf("%d",&b[i][j]);
	}
}

	for(i=0;i<N;i++)
		{	
				for(j=0;j<N;j++)
			{
				s=a[i][j]+b[i][j];
				printf("%d ",s);
			}
			printf("\n");
		}
	}


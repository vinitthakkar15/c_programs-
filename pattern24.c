#include<stdio.h>

main()
{
    int i,j;
    int n;

    printf("enter number limit=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");

        }
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
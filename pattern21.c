#include<stdio.h>

main()
{
    int i,j;
    int n,k;
    

    printf("enter number limit=>");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",k);
         
        }
         k--;
         printf("\n");
    }
}
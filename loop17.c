#include<stdio.h>

main()
{
    int i,n,s=1;

    printf("\n enter limit n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf(" %d *",i);
        s=s*i;
    }
    printf("\nMulti = %d",s);
}
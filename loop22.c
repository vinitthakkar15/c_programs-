#include<stdio.h>

main()
{
    int i,n,s=1;

    printf("\n enter limit=>");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf(" %d *",i);
        s=s*i;
    }
    printf("\nFactorial = %d",s);
}



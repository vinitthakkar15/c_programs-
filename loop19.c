#include<stdio.h>

main()
{
    int i,n,s=1;

    printf("\n enter limit =>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
                printf("%d+",i*i);
                s=s+i*i;
        }
        else
        {
                printf("%d+",i*i*i);
                s=s+i*i*i;
        }
    }
    printf("\n Sum = %d ",s);
}

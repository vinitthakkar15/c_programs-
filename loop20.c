#include<stdio.h>

main()
{
    int i,n,s=0;

    printf("\n enter limit n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
                printf("-%d",i);
                s=s-i;
        }
        else
        {
                printf("+%d",i);
                s=s+i;
        }
    }
    printf("\n Sum = %d ",s);
}

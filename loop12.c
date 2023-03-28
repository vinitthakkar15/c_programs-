#include<stdio.h>
main()
{
    int i;
    int n,c=0,s=0;

    printf("\n enter limit");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
        printf("\n%d ",i);
        c++;
        s=s+i;
    }
    }
    printf("\nTotal even values are %d Sum = %d",c,s);
}
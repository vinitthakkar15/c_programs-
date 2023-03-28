#include<stdio.h>

main()
{
    int i;
    int n,c=0,s=0,g=0,h=0;

    printf("\n enter limit=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
        printf("\n%d is even",i);
        c++;
        s=s+1;

    } 
    else{ 
    printf("\n%d is odd",i);
        h++;
        g=g+1;
    }

} printf("\n total number even  %d  sum =%d",c,s);
  printf("\n total number odd %d sum=%d",h,g);



}
    
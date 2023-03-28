#include<stdio.h>

main()
{
    int i,n,s=1;

    printf("\n enter limit n");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf(" %d *",i);
        s=s*i;
        i++;
    }
    printf("\nFactorial = %d",s);
      
}


#include<stdio.h>

main()
{
    int i,n,s=1;

    printf("\n enter limit n");
    scanf("%d",&n);

    i=n;
    while(i>=1)
    {
        printf(" %d *",i);
        s=s*i;
        i--;
    }
    printf("\nFactorial = %d",s);
      
}



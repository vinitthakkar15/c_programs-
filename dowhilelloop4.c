#include<stdio.h>

main()
{
    int i,n,s=1;

    printf("\n enter limit =>");
    scanf("%d",&n);

    i=n;
    do
    {
        printf(" %d *",i);
        s=s*i;
        i--;
    }while(i>=1);
    printf("\nFactorial = %d",s);
      
}



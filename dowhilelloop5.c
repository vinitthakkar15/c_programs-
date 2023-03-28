#include<stdio.h>

main()

{

    int i,n,s=1;

    printf("\n enter limit n");
    scanf("%d",&n);

    i=1;
    do
    {
        printf(" %d *",i);
        s=s*i;
        i++;
    }  while(i<=n);
    printf("\nFactorial = %d",s);
      
}


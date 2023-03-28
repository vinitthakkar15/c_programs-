#include<stdio.h>

main()

{
    int p,q;

    printf("\nenter the first number =>");
    scanf("%d",&p);

    printf("\nenter the second number =>");
    scanf("%d",&q);


    if(p>q)
    {
        printf("\nfirst number is greater number");
    }
    else if(q>p)
    {
        printf("\nsecond number is greter number");
    }
    else
    {
        printf("\nboth are equal");
    }
}
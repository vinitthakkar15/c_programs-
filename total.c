#include<stdio.h>

main()

{
    int m,e,h;

    printf("\nEnter maths marks =>");
    scanf("%d",&m);

    printf("\nEnter english marks =>");
    scanf("%d",&e);

    printf("\nhindi marks=>");
    scanf("%d",&h);

printf("total of all subject marks  %d",m+e+h);  

    if(m+e+h>50)
    {
        printf("\nHappy party time");
    }
    else
    {
        printf("\nCall ur parents");
    }

}
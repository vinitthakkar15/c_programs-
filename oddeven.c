#include<stdio.h>

main()
{
    int  number;

    printf("enter the number=>");
    scanf("%d",&number);

     number%2==0 ? printf("\nthe number is even") : printf("\nthe number is odd"); 
}

// number>0 ? printf("numeber is pos") : printf("\n number is neg");
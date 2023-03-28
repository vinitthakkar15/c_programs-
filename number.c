#include<stdio.h>

main()

{
    int number;

    printf("enter the number=>:");
    scanf("%d",&number);


    if(number>=0)
    {
        printf("number is pos");
    }

    else
    {
        printf("number is neg");
    }
}
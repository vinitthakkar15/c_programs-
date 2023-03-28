#include<stdio.h>
main()

{
    int number;
    

    hp:
    printf("\nenter the number:=>");
    scanf("%d",&number);


    if(number>=1)
    {
        printf("number is pos");

        printf("\nSquare = %d ",number*number);
    }
    else
    {
        printf("\nsorry enter pos number");
        goto hp;
    }
}
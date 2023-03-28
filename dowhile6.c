#include<stdio.h>
main()
{
    int number;
    int op;
    do
    {
    
    printf("\nPress 1 for Square");
    printf("\nPress 2 for Cube");
    printf("\nPress 3 for Exit");
    printf("\nenter the option =>");
    scanf("%d",&op);

    if(op==1)
    {
        printf("\nenter the number:");
        scanf("%d",&number);
        printf("\nSquare = %d",number*number);
    }
    else if(op==2)
    {
        printf("\nenter the number:");
        scanf("%d",&number);

        printf("\nCube = %d",number*number*number);
    }
    else if(op==3)
    {
        printf("\nBye");
    }
    else
    {
        printf("\nWrong opt");
    }

    }while(op!=3);
}

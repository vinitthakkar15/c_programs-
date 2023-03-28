#include<stdio.h>
main()
{
    int number;
    int op;
    printf("Press 1 for Square");
    printf("\nPress 2 for Cube");
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
    else
    {
        printf("\nWrong opt");
    }
}

/*
1) 1 add

2)
1 for areaoftraingle
2 for areaofcirlce
3 for pn


*/
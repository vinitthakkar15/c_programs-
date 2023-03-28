#include<stdio.h>
main()
{
    int number;
    char op;
    printf("Press s for Square");
    printf("\nPress c for Cube");
    printf("\nenter the option =>");
    scanf("%c",&op);

    if(op=='s'||op=='S')
    {
        printf("\nenter the number:");
        scanf("%d",&number);
        printf("\nSquare = %d",number*number);
    }
    else if(op=='c'||op=='C')
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
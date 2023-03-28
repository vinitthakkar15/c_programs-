#include<stdio.h>
main()
{
    int number;
    int op;
    printf("Press 1 for Square");
    printf("\nPress 2 for Cube");
    printf("\nenter the option =>");
    scanf("%d",&op);


switch(op)
{
    case 1:
        printf("\nenter the number=>:");
        scanf("%d",&number);
        printf("\nSquare = %d",number*number);
        break;

    case 2:
        printf("\n enter the number=>:");
        scanf("%d",&number);
        printf("\ncube=%d",number*number*number);
        break;

    default:
    printf("\nWrong op no");

}
}
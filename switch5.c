#include<stdio.h>
main()
{
    int number;
    char op;
    printf("Press a for Square");
    printf("\nPress b for Cube");
    printf("\nenter the option =>");
    scanf("%c",&op);


switch(op)
{
    case 'a':
        printf("\nenter the number=>:");
        scanf("%d",&number);
        printf("\nSquare = %d",number*number);
        break;

    case 'b':
        printf("\n enter the number=>:");
        scanf("%d",&number);
        printf("\ncube=%d",number*number*number);
        break;

    default:
    printf("\nWrong op no");

}
}
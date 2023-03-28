#include<stdio.h>

main()
{

int month;

printf("\nenter month ==>");
scanf("%d",&month);

switch(month)
{
case 1:

    printf("\njan");
    break;

case 2:

    printf("\nfeb");
    break;

case 3:

    printf("\nmar");
    break;
case 4:

    printf("\napr");
    break;
case 5:

    printf("\nmay");
    break;
case 6:

    printf("\njun");
    break;

case 7:

    printf("\njul");
    break;

case 8:

    printf("\naug");
    break;
case 9:

    printf("\nsep");
    break;

case 10:

    printf("\noct");
    break;
case 11:

    printf("\nnov");
    break;
case 12:

    printf("\ndec");
    break;

    default:
    printf("\nWrong month no");
}
}








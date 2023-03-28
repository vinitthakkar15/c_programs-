#include<stdio.h>

main()

{
    int number;
    char op;
    float h,b;
    float r;

    printf("\nPress p for Area of triangle");
    printf("\nPress q for Area of circle");
    printf("\nPress r for number is pov or neg");
    printf("\nenter the option=>");
    scanf("%c",&op);


    if(op=='p'||op=='P')
    {
        printf("\nEnter height =>");
        scanf("%f",&h);
    
        printf("\nEnter base =>");
        scanf("%f",&b);
    
        printf("\nArea of triangle = %.2f",h*b*0.5);
    }

    else if(op=='q'||op=='Q')
    {
        printf("enter the value");
        scanf("%f",&r);

        printf("\nArea of circle = %.2f",r*r*3.14);

    }

    else if(op=='r'||op=='R')
    {
          printf("enter the number:");
          scanf("%d",&number);

            if(number>0)
            {
                printf("number is pos");
            }
            else 
            {
                printf("number is neg");
            }

    }

    else{
        printf("\nWrong opt");
    }
}
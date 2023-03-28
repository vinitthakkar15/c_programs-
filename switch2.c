#include<stdio.h>

main()

{
    int number;
    int op;
    float h,b;
    float r;

    printf("\nPress 1 for Area of triangle");
    printf("\nPress 2 for Area of circle");
    printf("\nPress 3 for number is pov or neg");
    printf("\nenter the option=>");
    scanf("%d",&op);


    switch(op)
    {

        case 1:    
        printf("\nEnter height =>");
        scanf("%f",&h);
    
        printf("\nEnter base =>");
        scanf("%f",&b);
    
        printf("\nArea of triangle = %.2f",h*b*0.5);
        break;

        case 2:
    
        printf("enter the value");
        scanf("%f",&r);

        printf("\nArea of circle = %.2f",r*r*3.14);
        break;
    

        case 3:
    
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
            break;
    

        default:
        printf("\nWrong opt");
    
}
}
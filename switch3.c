#include<stdio.h>

main()

{
    int number;
    char op;
    int p,q;

    printf("\nPress a  for add");
    printf("\nPress b for sub");
    printf("\nPress c for multi");
    printf("\npress d for div");
    printf("\nenter the option=>");
    scanf("%c",&op);

    
     switch(op)
     {
        
         case 'a':
      
        printf("enter number=>");
        scanf("%d",&p);

        printf("enter second number=>");
        scanf("%d",&q);
       
        printf("\nAdd = %d",p+q);
        break;
       
    
    
        case 'b':
         printf("enter number=>");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);

         printf("\nSub = %d",p-q);
         break;


    
        case 'c':
        printf("enter number");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);

         printf("\nMulti = %d",p*q);
         break;

        case 'd':
    
         printf("enter number");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);


         printf("\nDiv = %d",p/q); 
         break;

    
    
        default:
         printf("\nWrong opt");
    }
    

}
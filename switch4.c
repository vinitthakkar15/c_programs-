#include<stdio.h>

main()

{
    int number;
    char op;
    int p,q;

    printf("\nPress +  for add");
    printf("\nPress - for sub");
    printf("\nPress * for multi");
    printf("\npress / for div");
    printf("\nenter the option=>");
    scanf("%c",&op);

    
     switch(op)
     {
        
         case '+':
      
        printf("enter number=>");
        scanf("%d",&p);

        printf("enter second number=>");
        scanf("%d",&q);
       
        printf("\nAdd = %d",p+q);
        break;
       
    
    
        case '-':
         printf("enter number=>");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);

         printf("\nSub = %d",p-q);
         break;


    
        case '*':
        printf("enter number");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);

         printf("\nMulti = %d",p*q);
         break;

        case '/':
    
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
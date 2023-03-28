#include<stdio.h>

main()

{
    int number;
    int op;
    int p,q;

    printf("\nPress 1 for add");
    printf("\nPress 2 for sub");
    printf("\nPress 3 for multi");
    printf("\npress 4 for div");
    printf("\nenter the option=>");
    scanf("%d",&op,&p,&q);

    if(op==1)
    {
      
        printf("enter number=>");
        scanf("%d",&p);

        printf("enter second number=>");
        scanf("%d",&q);
       
        printf("\nAdd = %d",p+q);
        
       
    }
    else if(op==2)
    {
         printf("enter number=>");
         scanf("%d",&p);

         printf("enter second number=>");
         scanf("%d",&q);

         printf("\nSub = %d",p-q);
    
    }
    else if(op==3)
    {
        printf("enter number=>");
         scanf("%d",&p);

         printf("enter second number=>");
         scanf("%d",&q);

         printf("\nMulti = %d",p*q);
    }
    else if(op==4)
    {
         printf("enter number=>");
         scanf("%d",&p);

         printf("enter second number=>");
         scanf("%d",&q);


         printf("\nDiv = %d",p/q); 

    }
    else
    {
         printf("\nWrong opt");
    }
    

}
#include<stdio.h>

main()

{
    int number;
    char op;
    int p,q;

    do{

    printf("\nPress a or + for add");
    printf("\nPress b for sub");
    printf("\nPress c for multi");
    printf("\npress d for div");
    printf("\nPress e for Exit");
    printf("\nenter the option=>");
    scanf("%c",&op);

    if(op=='a' || op=='A' || op=='+')
    {
      
        printf("enter number");
        scanf("%d",&p);

        printf("enter second number");
        scanf("%d",&q);
       
        printf("\nAdd = %d",p+q);
        
       
    }
    else if(op=='b'||op=='B'||op=='-')
    {
         printf("enter number");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);

         printf("\nSub = %d",p-q);
    
    }
    else if(op=='c'||op=='C'||op=='*')
    {
        printf("enter number");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);

         printf("\nMulti = %d",p*q);
    }
    else if(op=='d'||op=='D'||op=='/')
    {
         printf("enter number");
         scanf("%d",&p);

         printf("enter second number");
         scanf("%d",&q);


         printf("\nDiv = %d",p/q); 

    }

    else if(op=='e'||op=='E')
    {
        printf("\n bye");
    }

    else
    {
         printf("\nWrong opt");
    }

    }while(op!='e');
    

}






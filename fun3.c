#include<stdio.h>


    void add()
{
        int p,q;
        printf("\nenter number=>");
        scanf("%d",&p);

        printf("\nenter second number=>");
        scanf("%d",&q);
       
        printf("\nAdd = %d",p+q);
}
void sub()
{
        int p,q;
        printf("\nenter number=>");
        scanf("%d",&p);

        printf("\nenter second number=>");
        scanf("%d",&q);
       
        printf("\nsub = %d",p-q);
}
void mul()
{
        int p,q;
        printf("\nenter number=>");
        scanf("%d",&p);

        printf("\nenter second number=>");
        scanf("%d",&q);
       
        printf("\nmul = %d",p*q);
}
void div()
{
        int p,q;
        printf("\nenter number=>");
        scanf("%d",&p);

        printf("\nenter second number=>");
        scanf("%d",&q);
       
        printf("\ndiv = %d",p/q);
}
main()
{
    add();
    sub();
    mul();
    div();
}

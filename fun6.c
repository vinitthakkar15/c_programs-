#include<stdio.h>

void add(int a,int b)
{
    printf("\n add=%d",a+b);
}

void max(int a, int b)
{
    if(a>b)
    {
        printf("\n %d is greater",a);
    }
    else{
        printf("\n %d is greater",b);
    }
}

void cube(int a)
{
    printf("\ncube=%d",a*a*a);
}

main()
{
    int a,b;
    printf("\n enter the number a=>");
	scanf("%d",&a);
	printf("\n enter the number b=>");
	scanf("%d",&b);
    add(a,b);
    max(a,b);
    cube(a);
}
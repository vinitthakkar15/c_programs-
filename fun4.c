#include<stdio.h>
void add(int a,int b)
{
	printf("\naddition=%d",a+b);
}
void sub(int a,int b)
{
	printf("\nsubtraction=%d",a-b);
}
void multi(int a,int b)
{
	printf("\nmultiplication=%d",a*b);
}
void div(int a,int b)
{
	printf("\ndivition=%d",a/b);
}

main()
{
	int a,b;
	printf("\n enter the number a=>");
	scanf("%d",&a);
	printf("\n enter the number b=>");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	multi(a,b);
	div(a,b);
}
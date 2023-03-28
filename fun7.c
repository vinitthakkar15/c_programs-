#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int max2(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
    }
}
int square(int a)
{
	return a*a;
}
main()
{
	int a,b,c;
	printf("\n enter the a=>");
	scanf("%d",&a);
	printf("\n enter the b=>");
	scanf("%d",&b);
	
	c=add(a,b);
	printf("\nSum = %d",c);
	c=max2(a,b);
	printf("\nMax value = %d",c);
	c=square(a);
	printf("\nsquare = %d",c);

}
/*
void add() N A N R
void add(int a,int b)Y A N R
int add(int a,int b)Y A Y R
int add()N A Y R
*/
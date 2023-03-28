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

void cube()
{
        int a;
        printf("\nenter number=>");
        scanf("%d",&a);

        printf("\nCube = %d",a*a*a);
}

void areaoftring()
{

    float h,b;
    h=100;
    b=200;

    printf("\nArea of triangle = %.2f",h*b*0.5);
}

void areaofcircle()
{
    float r;
r=10;

printf("\nArea of circle = %.2f",r*r*3.14);
}  

void posneg()
{
     int number;
 printf("\nenter the number=>");
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

void oddeven()
{
    int i;
    int number;

    printf("\n enter number=>");
    scanf("%d",&number);
    
    if(i%2==0)
    {
        printf("\n%d is even",i);
    }
    else
    {
        printf("\n%d is odd",i);
    }
    }


void max2()
{
   int a, b;  
    printf("\n enter the first number=>");  
    scanf("%d",&a); 
    printf("\n enter the scond number");
    scanf("%d",&b); 
    
    if(a > b) 
    {
        printf("\n%d is Largest", a);          
    } 
    else if (b > a)
    { 
        printf("\n%d is Largest", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
}
void fact()
{
 int i,n,s=1;

    printf("\n enter limit=>");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf(" %d *",i);
        s=s*i;
    }
    printf("\nFactorial = %d",s);
}

void reverseno()
{
int i;
int n;
    printf("\n enter limit =>");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("\n%d ",i);
    
    }
}
void palindrome()
{
     int n,c,s=0,r;

     printf("enter the number");
     scanf("%d",&n);
     c=n;
     while(n>0)
     {
        r=n%10;
        s=r+(s*10);
        n=n/10;
     }
     if(c==s)
     printf(" palindrome number");
     else
     printf("not  palindrome");
}

main()
{
 add();
 cube();
 areaoftring(); 
 areaofcircle();
 posneg();
 oddeven();
 max2();
 fact();
 reverseno();
 palindrome();
}
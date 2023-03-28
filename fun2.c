#include<stdio.h>

void add()
{
        int p,q;
        printf("\n add");
        printf("\nenter number=>");
        scanf("%d",&p);

        printf("\nenter second number=>");
        scanf("%d",&q);
       
        printf("\nAdd = %d",p+q);
}

void cube()
{
        int a;
        printf("cube");
        printf("\nenter number=>");
        scanf("%d",&a);

        printf("\nCube = %d",a*a*a);
}

void areaoftring()
{

    float h,b;
    h=100;
    b=200;

    printf("areaoftring");
    printf("\nArea of triangle = %.2f",h*b*0.5);
}

void areaofcircle()
{
    float r;
r=10;
printf("areaofcircle");
printf("\nArea of circle = %.2f",r*r*3.14);
}  

void posneg()
{
     int number;
     printf("posneg");
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
    printf("oddeven");
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
   printf("max2");
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
    printf("fact");
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
    printf("reverseno");
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
     printf("palindrome");
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
    int op;
    printf("\nEnter 1 for add");
    printf("\nEnter 2 for cube");
    printf("\nEnter 3 for areaoftring");
    printf("\nEnter 4 for areaofcircle");
    printf("\nEnter 5 for posneg");
    printf("\nEnter 6 for oddeven");
    printf("\nEnter 7 for max2");
    printf("\nEnter 8 for fact");
    printf("\nEnter 9 for reverseno");
    printf("\nEnter 10 for palindrome");
    printf("\nenter the option=>");
    scanf("%d",&op);


     
     
     if(op==1)
     {
        add();
     }

     else if(op==2)
     {
        cube();
     }
     else if(op==3)
     {
        areaoftring(); 
     }
     else if(op==4)
     {
        areaofcircle();
     }
     else if(op==5)
     {
        posneg();
     }
     else if(op==6)
     {
        oddeven();
     }
     else if(op==7)
     {
        max2();
     }
     else if(op==8)
     {
         fact();
     }
     else if(op==9)
     {
        reverseno();
     }
     else if(op==10)
     {
        palindrome();
     }

     else{
        printf("\nworng op");
     }
}
#include<stdio.h>
main()
{
    int a[100]={5,6,2,3,9};  
    int n=5,i;
    int mul=0;
    printf("\nValues A are : ");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);  
    }  

   
    printf("\nmul of array elements :");
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]*a[i]);
    }



    
}

/*#include<stdio.h>
main()
{
    int a[100]={5,6,2,3,9};  
    int n=5,i;
    int mul=0;
    printf("\nValues A are : ");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);  
    }  

   
    printf("\nmul of array elements :");
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]*a[i]*a[i]);
    }



    
}*/
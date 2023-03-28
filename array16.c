#include<stdio.h>
main()
{
    int a[100]={110,120,130,140,150};
    int b[100]={10,20,50,60,70};  
    int n=5,i;
    int sum=0;
    printf("\nValues A are : ");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);  
    }  
    printf("\nValues B are : ");
    for(i=0;i<5;i++)
    {
        printf(" %d ",b[i]);  
    }  
    printf("\nsum of array elements :");
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]+b[i]);
    }



    
}


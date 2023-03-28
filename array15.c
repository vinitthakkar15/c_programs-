#include <stdio.h>

int main() {

  int a[100]={11,9,33,44,55,12,34,54,21}; 
    int n=9,i;

 
printf("\nValues are : ");
for(i=n-1;i>=0;i--)
{
    printf(" %d ",a[i]);
}  

 
  return 0;
}
#include <stdio.h>

int main() {

  int a[100]; 
    int n,i;

  printf("Enter limit => ");
  scanf("%d", &n);

printf("\nEnter values =>");
for(i=0;i<n;i++)
{
  scanf("%d", &a[i]);
}
printf("\nValues are : ");
for(i=n-1;i>=0;i--)
{
    printf(" %d ",a[i]);
}  

 
  return 0;
}
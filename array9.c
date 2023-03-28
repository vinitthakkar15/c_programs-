#include <stdio.h>

int main() {

  int a[100]; 
    int n,i;
    int sum=0;

  printf("Enter limit => ");
  scanf("%d", &n);

for(i=0;i<n;i++)
{
  printf("Enter an integer a[%d] ",i);
  scanf("%d", &a[i]);
}
printf("\nValues");
for(i=0;i<n;i++)
{
   
   sum=sum+a[i];
}  

 printf("%d",sum);
  return 0;
}


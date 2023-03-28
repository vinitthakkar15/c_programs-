#include <stdio.h>

int main() {

  int a[100]; 
    int n,i;
    int ce=0;

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
    if(a[i]==7)
    {
     ce++;
    }
} 
    printf("\n count=%d",ce);

 
  return 0;
}
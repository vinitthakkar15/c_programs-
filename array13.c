#include <stdio.h>

int main() {

  int a[100]; 
    int n,i;
 
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
    printf("\n %d",a[i]*-1);

}  

 
  return 0;
}
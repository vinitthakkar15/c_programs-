#include <stdio.h>

int main() {

  int a[100]; //0-99
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
    
    printf("\n%d %d",a[i],a[i]*a[i]);

}  

 
  return 0;
}
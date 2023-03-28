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
    if(a[i]%2==0)
    {
        printf("\n%d is even",a[i]);
    }
    else{
        printf("\n%d is odd",a[i]);
    }
    
}  

 
  return 0;
}


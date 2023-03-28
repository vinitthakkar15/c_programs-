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
    if(a[i]>=1){
    printf("\n%d is pos",a[i]);
    }

    else{
        printf("\n%d is neg",a[i]);
    }
 
    
}  

 
  return 0;
}


 

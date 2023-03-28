#include <stdio.h>

int main() {

  int a[100]; //0-99
    int n,i;
    int  evenSum = 0, OddSum = 0;
    int ce=0,co=0;
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
        ce++;
      evenSum = evenSum + a[i];
    }
    else{
        printf("\n%d is odd",a[i]);
      OddSum = OddSum + a[i];
      co++;
    }
}  
 printf("\n The Sum of Even Numbers in this Array = %d  Count = %d", evenSum,ce);
 printf("\n The Sum of Odd Numbers in this Array = %d Count = %d", OddSum,co);
 return 0;
}
 
  



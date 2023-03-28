#include <stdio.h>

int main() {

  int a[100]; 
    int n,i,y;
    int ce=0;

  printf("Enter limit => ");
  scanf("%d", &n);

for(i=0;i<n;i++)
{
  printf("Enter an integer a[%d] ",i);
  scanf("%d", &a[i]);
}

printf("\nEnter value for search =>");
scanf("%d",&y);

for(i=0;i<n;i++)
{
   if(a[i]==y)
   {
      ce++;
   }
    
} 
if(ce==0)
{
  printf("\nNot found");
}
else
{  
  printf("\n count=%d",ce);
}
 
  return 0;
}
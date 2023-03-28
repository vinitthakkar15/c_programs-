#include <stdio.h>

int main() {

  int i,num,rem,rev=0,f,c;

  printf("Enter any number=>: ");
  scanf("%d", &num);
    c=num;
  while (num>0) {

    rem =num%10;
  
    f=1;
    for(i=1;i<=rem;i++)
    {
        f=f*i;
    }
    rev=rev+f;
    num=num/=10;
    
  }
  if(rev=c)
  {
   printf("\n%d is a krishnamurti ",num);
  }

   else{
    printf("%d is not krishnamurti ",num);
   }


}

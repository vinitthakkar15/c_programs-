#include <stdio.h>

int main() {

  int n, arm = 0, r,y;

  printf("Enter any number =>: ");
  scanf("%d", &n);
    y=n;
  while (n != 0) {
    r= n % 10;
    arm = arm+(r*r*r);
    n=n/10;
  }

  printf("No = %d armstrong number = %d",y, arm);

  if(y==arm)
  {

  }
  

  return 0;
}
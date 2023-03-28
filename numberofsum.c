#include <stdio.h>

int main() {

  int n, reverse = 0, remainder,y;

  printf("Enter an integer: ");
  scanf("%d", &n);
    y=n;
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse  + remainder;
    n /= 10;
  }

  printf("No = %d Reversed number = %d",y, reverse);

  if(y==reverse)
  {

  }
  

  return 0;
}
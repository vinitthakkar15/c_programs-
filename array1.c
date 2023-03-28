#include <stdio.h>

int main() {

  int a[100]; //0-99

  printf("Enter an integer: ");
  scanf("%d", &a[0]);

  printf("Enter an integer: ");
  scanf("%d", &a[1]);

  printf("Enter an integer: ");
  scanf("%d", &a[2]);
  
  printf("Enter an integer: ");
  scanf("%d", &a[3]);

  printf("Enter an integer: ");
  scanf("%d", &a[4]);
  
  printf("\n%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);

  return 0;
}
#include<stdio.h>

main()
{
    int i,n;
    
    printf("\n enter limit =>");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf("\n%d",i);
        
        i++;
    }
    
}

/*
1-1
2-4

===========

5 X 1 = 5

==========

1 is odd
2 is even

========

2 4 6 8

==========
 1 X 2 X 3 X 4 X 5 
 120

 ==========
  5 X4 X3 X2 X1
  120



*/

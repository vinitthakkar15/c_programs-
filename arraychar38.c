#include<stdio.h>
#include<string.h>

main()
{
    char name1[100];
    char ch;
    int i,x,low=0,up=0;
    printf("\nenter the name1=>");
    gets(name1);
    x=strlen(name1);

    for(i=0;i<x;i++)
    {
        ch=name1[i];
        if(ch>=97 && ch<=122)
        {
            low++;
        }
        else if(ch>=65 && ch<=90)
        {
            up++;
        }
    }
    printf("\nTotal upper %d lower %d",up,low);
    //abcdxyz , ABCDXYZ
    //a--97 b--98 c--99 d--100 x--120 y--121 z--122 ASCII
    //A--65 B--66 C--67 D--68 X--88 Y--89 Z--90
}

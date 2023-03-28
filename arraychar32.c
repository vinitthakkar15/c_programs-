#include<stdio.h>
#include<string.h>

main()
{
    char name[100];
    printf("\nenter the name=>");
    gets(name);
    printf("\n%s",strlwr(name));
}
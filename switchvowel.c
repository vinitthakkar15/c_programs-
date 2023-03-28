#include<stdio.h>

main()
{
    char alpha;

    printf("enter any alphabet=>");
    scanf("%c",&alpha);

    switch(alpha)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        printf("\n it is a vowel");
        break;
        default :
        printf("\n it is a consonant");
    }
}
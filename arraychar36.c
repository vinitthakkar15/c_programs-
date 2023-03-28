#include<stdio.h>
#include<string.h>

main()
{
    char name1[100],name2[100];
    printf("\nenter the name1=>");
    gets(name1);
    printf("\nenter the name2=>");
    gets(name2);
    
    printf("\n%d",strcmp(name1,name2));

    if(strcmp(name1,name2)==0)
    {
     printf("\nBoth are equal");   
    }
    else{
        printf("\nBoth are different");
    }

    //ram ram , ram raj ,raj ram ,Raj Raj
}
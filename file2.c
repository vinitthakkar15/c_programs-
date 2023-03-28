#include<stdio.h>

main()
{
FILE *f1;
char ch;
int c=0;

f1=fopen("C:\\Users\\vinit\\demo\\abc.txt","r");

while(ch!=EOF)
{
ch=getc(f1);
if(ch==' ')
{
	c++;
}
}
fclose(f1);
printf("\nTotal spaces are %d",c);
}
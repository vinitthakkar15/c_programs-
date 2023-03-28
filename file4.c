#include<stdio.h>

main()
{
FILE *f1;
char ch;
int u=0;
int l=0;

f1=fopen("C:\\Users\\vinit\\demo\\abc.txt","r");

while(ch!=EOF)
{
ch=getc(f1);
if(isupper(ch))
{
	u++;
}
else if(islower(ch))
{
    l++;
}
}
fclose(f1);
printf("\nTotal upper are %d",u);
printf("\nTotal lower are%d",l);
}

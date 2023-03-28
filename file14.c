#include<stdio.h>

main()
{
FILE *f1,*f2,*f3;
char ch;
char ch2;


f1=fopen("C:\\Users\\vinit\\demo\\usa.txt","r");
f2=fopen("C:\\Users\\vinit\\demo\\canada.txt","r");
f3=fopen("C:\\Users\\vinit\\demo\\u1.txt","w");
while(ch!=EOF)
{
ch=getc(f1);
 putc(ch,f3);
}
while(ch2!=EOF)
{
    ch2=getc(f1);
    putc(ch2,f3);
}
fclose(f1);
fclose(f2);
fclose(f3);
printf("\n merge");
}

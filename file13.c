#include<stdio.h>

main()
{
FILE *f1,*f2,*f3;
char ch;


f1=fopen("C:\\Users\\vinit\\demo\\abc.txt","r");
f2=fopen("C:\\Users\\vinit\\demo\\pqr upper .txt","w");
f3=fopen("C:\\Users\\vinit\\demo\\pqr lower.txt","w");


while(ch!=EOF)
{
ch=getc(f1);
if(isupper(ch))
{
	
     putc(ch,f2);
}
else if(islower(ch))
{
  
   putc(ch,f3);
}
}
fclose(f1);
fclose(f2);
fclose(f3);
printf("\n copied");
}




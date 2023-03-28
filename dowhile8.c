#include<stdio.h>
main()
{
char op;
int qty,t=0;

do{
printf("\nEnter a for Panipuri");
printf("\nEnter b for Pav-Bhaji");
printf("\nEnter c for Pizza");
printf("\nEnter d for Bhel");
printf("\nEnter e for Ice-Cream");
printf("\nenter f for exit");
printf("\nEnter option=>");
scanf("%c",&op);

if(op=='a')
{
	printf("\nEnter qty of panipuri=>");
	scanf("%d",&qty);
	printf("\nBill of panipuri = %d",qty*100);
    t=t+qty*100;
}
else if(op=='b')
{
		printf("\nEnter qty of pav-bhaji=>");
    	scanf("%d",&qty);
	printf("\nBill of pav-bhaji = %d",qty*120);
    t=t+qty*120;
}
else if(op=='c')
{
		printf("\nEnter qty of pizza=>");
	scanf("%d",&qty);
	printf("\nBill of pizza = %d",qty*500);
    t=t+qty*500;

}
else if(op=='d')
{
	printf("\nEnter qty of Bhel=>");
	scanf("%d",&qty);
	printf("\nBill of bhel = %d",qty*80);
    t=t+qty*80;

}
else if(op=='e')
{
		printf("\nEnter qty of Ice-cream=>");
	scanf("%d",&qty);
	printf("\nBill of Ice-Cream = %d",qty*100);
    t=t+qty*100;

}

else if (op=='f')
{
    printf("\nTotal bill = %d",t);
    printf("\n bye");
}
 else
 {
 	printf("\nPlease Check menu");
 }

}while(op!='f');
}
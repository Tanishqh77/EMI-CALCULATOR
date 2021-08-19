

#include<iostream.h>
#include<conio.h>
int main()
{   clrscr();
int INT_RATE;
int TENURE;
int AMOUNT;
int MONTHLY_INT_RATE;
float A;
float N;
float D;
float R;
int C,B,i;
int AMOUNT_TO_REPAY;
 int EMI;
int AMOUNT_OVER_PRINCIPAL;



cout<<"enter INTREST RATE of required loan from  the above list"<<endl;
cin>>INT_RATE;

cout<<"enter amount of loan taken"<<endl;
cin>>AMOUNT;

cout<<"enter the tenuren to repay the loan (in MONTHS)"<<endl;
cin>>TENURE;

MONTHLY_INT_RATE=(INT_RATE/1200)*AMOUNT;

A=(INT_RATE/1200)+1;
B=TENURE-1;
C=1;
for(i=0;i<=B;i++)
{
C=C*A;
}
N=C*A;
D=N-1;
R=N/D;
EMI=R*MONTHLY_INT_RATE;
AMOUNT_TO_REPAY=EMI*TENURE;
AMOUNT_OVER_PRINCIPAL=AMOUNT_TO_REPAY-AMOUNT;

cout<<"EMI to pay ="<<EMI<<endl;
cout<<"total amount to payback to the bank="<<AMOUNT_TO_REPAY<<endl;
cout<<"Amount paid over the principal="<<AMOUNT_OVER_PRINCIPAL<<endl;




 getch();

}
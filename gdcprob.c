#include<stdio.h>

int main(){

int num1, num2;
int dividend, divisor, remainder;
//Read the two numbers from user
scanf("%d %d",&num1,&num2);
//Let first number be dividend and second number be divisor
dividend = num1;
divisor=num2;

for(remainder = dividend%divisor;remainder !=0; remainder = dividend%divisor)
{
//Make dividend as divisor
dividend = divisor;
//Divisor as remainder
divisor = remainder;
}
//When remainder has become zero the divisor has the value of GCD
printf("%d", divisor);
}
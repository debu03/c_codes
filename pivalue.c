#include<stdio.h>
int main(){
    int n,i;
    float sum, den, num=4;
    sum=0;
    den=1;
    printf ("Enter the number of terms:") ;
    scanf ("%d", &n);
    i=1;
    while (i<=n){
    sum= sum+(num/den) ;
//printf("\n°d-iteration--of",i,sum);
    num=-num;
    den=den+2;
    i++;}
    printf(" \nThe sum is %f", sum) ;}
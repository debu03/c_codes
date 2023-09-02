#include<stdio.h>
int main(){

    int ph;
    scanf("%d",&ph);
    switch(ph){
case 0 ... 2:
    printf("Very Acidic");
    break;
case 3 ... 6:
    printf("Acidic");
    break;
case 7:
    printf("Neutral");
    break;
case 8 ... 12:
    printf("Alkaline");
    break;
default:
    printf(" Very Alkaline");
    break;
    }
    return 0;
}

//only int or expression.

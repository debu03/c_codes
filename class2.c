#include <stdio.h>

void print()
{
    printf("VIT");
}

int sum(int a, int b){
    return a+b;
}

int 
main(){
    const int a = 10;
    int a1;
    const float b = 5.5;
    float f1;
    const char c = 'A';
    char c1;
    printf("a = %d, b = %.2f, c = %.2f, d = %c \n",a,b,a+b,c);
    a1 = 6;
    f1 = 25.5;
    c1 = 'B';
    scanf("%d %f %c", &a1, &f1, &c1);
    printf("a1 = %d f1= %.2f c1 = %c",a1,f1,c1);
}
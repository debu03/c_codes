
//*********TYPECASTING*************
#include<stdio.h>
int main(){
    int a=20,b;
    float f;
    f=a;
    printf("%d %f",a,f);
    f=12.34;
    //a=(int)f;
    printf("\n%d %f",a,f);
    b=15;
    f=(float)a/(float)b;
    printf("\n%f",f);
}
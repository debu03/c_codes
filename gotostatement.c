#include<stdio.h>
int main(){
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    if (n%2==0) goto even;
    else goto odd;
    even:printf("this is even\n");
        goto end;
    odd:printf("this is odd\n");
    end:printf("end");

}
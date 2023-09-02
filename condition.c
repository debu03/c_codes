#include <stdio.h>

int main(){
    int x,y,z;
    printf("\nEnter two diff int:");
    scanf("%d %d",&x,&y);
    z=(x>y)? x:y;
    printf("\nz=%d",z);
}
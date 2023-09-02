//switchcase

#include<stdio.h>
int main(){

    int bp;
    scanf("%d",&bp);
    switch(bp){
case 95 ... 105 :
    printf("Water");
    break;
case 358 ... 392:
    printf("Mercury");
    break;
case 1128 ... 1246:
    printf("Copper");
    break;
case 2048 ... 2302:
    printf("Silver");
    break;
case 2547 ... 2773:
    printf("Gold");
    break;
default:
    printf("Unknown");
    break;
    }
    return 0;
}
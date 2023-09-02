#include <stdio.h>

int main(){
    int arr[10],i;
    float f[5]={1,2,3,4,5};
    
    float sum=0;
    printf("enter 5 float value:");
    for(i=0;i<5;i++)
        scanf("%f",&f[i]);
    for(i=0;i<5;i++)
        sum=sum+f[i];
    printf("\nsum is:%f, ",sum);
    printf("\navg is:%f, ",sum/5);

}
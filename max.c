#include <stdio.h>

int main(){
    int arr[10],i;
    float f[5]={1,2,3,4,5};
    
    float max=f[0];
    printf("enter 5 float value:");
    for(i=0;i<5;i++)
        scanf("%f",&f[i]);
    for(i=1;i<5;i++)
        if (f[i]>max)
            max=f[i];
            
    printf("\nmax is:%f",max);
}


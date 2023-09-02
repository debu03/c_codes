#include <stdio.h>

int main(){
    int arr[10],i;
    int f[4]={1,2,3,4};
    
    int max=f[0];
    printf("enter 4 in value:");
    for(i=0;i<4;i++)
        scanf("%d",&f[i]);
    for(i=1;i<5;i++)
        if (f[i]>max)
            max=f[i];
            
    printf("\n%d",max);
}
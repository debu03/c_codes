#include <stdio.h>

int main(){
    int arr[10],i,n;
    float f[5]={1,2,3,4,5};


    printf("enter 5 integer:");

    for(i=0;i<5;i++)
        scanf("%f",&f[i]);
    printf("\nenter any no.:");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(f[i]==n){
            printf("present");
            return 0;}
    }
    printf("not present");
    return 0;
}
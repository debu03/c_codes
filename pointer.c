#include <stdio.h>

int main(){
    int arr[10],i,*ptr;
    ptr=arr;
    printf("enter 10 int:");
    for (i = 0;i < 10; i++)
        scanf("%d",&ptr[i]);
    for (i = 0;i < 10; i++)
        printf("%d",ptr[i]);
    return 0;

}
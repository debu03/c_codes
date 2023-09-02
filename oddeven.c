#include <stdio.h>

int main(){
    int arr[10],i,*ptr,c=0,d=0,n;
    ptr=arr;
    scanf("%d",&n);
    printf("enter int:");
    for (int i = 0;i < n; i++)
        scanf("%d",(ptr+i));
    for (int i = 0;i < n; i++)
    {
        if(*(ptr+i)%2==0)
        c++;
         else
        d++;

    }
    printf("%d  %d",c,d);
    

}
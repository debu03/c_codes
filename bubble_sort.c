#include<stdio.h>
int main(){
    int a[10],i,j,tmp;

    printf("enter 5 integer:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        for(j=0;j<(10-i);j++)
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
    for(i=0;i<10;i++)
        printf("%d, ",a[i]);
}
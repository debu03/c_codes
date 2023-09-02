#include<stdio.h>
int main(){
    int a[10],i,j,tmp,max;
    printf("enter 10 integers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)

    
    {
        max=0;
        for(j=1;j<10-i;j++)
            if(a[max]<a[j]) max=j;
        tmp=a[max];
        a[max]=a[9-i];
        a[9-i]=tmp;

    }
    for(i=0;i<10;i++)
        printf("%d, ",a[i]);
}


/* 12 44 54 65 33 23 22 45 98 67
find max 
i=0 => swap 
find max swap*/
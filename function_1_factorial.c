#include<stdio.h>
void factorial1(int n){
    
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    printf("\n factorial of %d is %d",n,f);
}
int main(){
    int n;
    printf("\nenter an integer:");
    scanf("%d",&n);
    factorial1(n);
    printf("\nenter an integer:");
    scanf("%d",&n);
    factorial1(n);
    printf("\nenter an integer:");
    scanf("%d",&n);
    factorial1(n);
}



//addition of 1 into taken array
#include <stdio.h>
int main(){
    int *ptr=NULL, i,n;
    printf("enter n: ");
    scanf("%d", &n);
    ptr=&n;
    printf("n = %d ptr = %u" ,n,ptr);
    printf("\n*ptr = %d", *ptr);
    printf("\nptr+1=%u", (ptr+1));
    printf(" \nEnd of the pgm");
}
// how to use array to take value
#include <stdio.h>
int main(){
    int *ptr,i,n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    return 0;
}
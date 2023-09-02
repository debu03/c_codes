#include <stdio.h>

int main(){
    int arr[10],i;
    float f[5]={1,2,3,4,5};

    //reading value from user
    printf("Enter 10 int:");
    /*scanf("%d",&arr[0]); //this will read the first element in array
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    scanf("%d",&arr[5]);
    scanf("%d",&arr[6]);
    scanf("%d",&arr[7]);
    scanf("%d",&arr[8]);
    scanf("%d",&arr[9]);*/ //reading upto 10 elements
//to avoid wiritingg this many statement we goto loop

    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        printf("%d, ",arr[i]);
}
    


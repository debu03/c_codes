#include <stdio.h>
const int n = 3;
void print(int arr[3][3],int m)
{
    int i,j;
    for (i = 0; i< m; i++)
        for (i=0; i<n; i++)
            printf("%d ", arr[i][j]);
}
int main()
{
    int arr[][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    print(arr,3);
    return 0;
}
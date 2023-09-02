#include<stdio.h>
int main(){
    float mat[3][3]={{10,10,10},{20,20,20},{30,30,30}};
    int i,j;
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)  
            printf("%f ",mat[i][j]);
    printf("\nEnter 9 float value: ");
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)  
            scanf("%f ",&mat[i][j]);
}

#include<stdio.h>
int main(){
float mat[3][3]={{10,10,10},{20,20,20},{30,30,30}};
int m,n,i,j,p,q,k;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
printf("%f ",mat[i][j]);
printf("\nEnter the order of the first matrix:");
scanf("%d %d",&m,&n);
printf("\nEnter the order of the second matrix:");
scanf("%d %d",&p,&q);
if(n==p)
{
float mat1[m][n];
printf("Enter %d float values: ",(m*n));
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%f",&mat1[i][j]);
float mat2[p][q];
printf("Enter %d float values: ",(q*p));
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%f",&mat2[i][j]);
float mat3[m][q];
for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
mat3[i][j]=0;
for(k=0;k<n;k++)
mat3[i][j] = mat3[i][j] + mat1[i][k]*mat2[k][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("%f ",mat3[i][j]);
printf("\n");
}
}
else
printf("\nMatrix multiplication cannot be done...");
}


#include <stdio.h>

int main()
{
    int num, i, j, k, l;
    printf("Enter a number:");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }
 
}

// #include<stdio.h>
// int main()
// {
//     for(int i=0 ; i<6;i++)
//     {
//         for(int j=0;j<i+1;j++)
//             printf("%d ",j);
//         printf("\n");
//     }
//     return 0;
// }
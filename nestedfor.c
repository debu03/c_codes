
#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        for (int j=i; j<=i && j>0; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
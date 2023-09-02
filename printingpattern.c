#include <stdio.h>

void print1()
{
    int i,j, n;
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    
    printf("Enter number of lines:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) 
        {
            printf("%c", x);
        }
        printf("\n");
    }
}

void print2(int n)
{ // not correct output
    // int n;
    // printf("Enter number of lines:");
    // scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void print3(char n)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) 
        {
            printf("%c", n);
        }
        printf("\n");
    }
}

void print4(int n, char x)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) 
        {
            printf("%c", x);
        }
        printf("\n");
    }
}

int main(){
    void (*p1)();
    p1 = &print1;
    (*p1)();
    
    void (*p2)(int);
    p2 = &print2;
    (*p2)(1);

    void (*p3)(char);
    p3 = &print3;
    (*p3)('#');
    
    void (*p4)(int, char);
    p4 = &print4;
    (p4)(5,'*');

}
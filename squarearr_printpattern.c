#include <stdio.h>
void fun(int a)
{
    printf("Value of a is: %d\n", a);
}

void fun1(int b)
{
    printf("square of %d is: %d\n", b, (b*b));
}

void print_pattern(char ch, int n)
{
    int i,j;
    printf("\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main()
{
    void (*fun_ptr)(int);
    fun_ptr = &fun;
    (*fun_ptr)(10);
    fun_ptr = &fun1;
    (*fun_ptr)(5);
    void (*p)(char, int);
    p = &print_pattern;
    (*p)('$', 5);
    
    
    return 0 ;
}
#include<stdio.h>
int main(){

    float marks;
    printf("Enter the marks: ");
    scanf("%f",&marks);
    if ((marks>=90)&&(marks<=100))
        printf("S");
    else if((marks>=80)&&(marks<=89))
        printf("A");
    else if((marks>=70)&&(marks<=79))
        printf("B");
    else if ((marks>=60)&&(marks<=69))
        printf("C");
    else if ((marks>=55)&&(marks<=59))
        printf("D");
    else if ((marks>=50)&&(marks<=54))
        printf("E");
    else
        printf("F");



}


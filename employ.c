#include<stdio.h>
struct date{
int day;
int month;
int year;

};
struct emp{
    int eno;
    char name[10];
    float sal;
    struct date doj;
};
int main(){

    struct emp e1;
    printf("Enter the details: ");
    scanf("%d %s %f",e1.eno,e1.name,e1.sal);
    scanf("%d %d %d", &e1.doj.day, &e1.doj.month, &e1.doj.year);
    printf("\nEmpNo-%d",e1.eno);
    printf("\nName-%s",e1.name);
    printf("\nsalary-%f",e1.sal);
    printf("\nDate of joining- %d %d %d", e1.doj.day, e1.doj.month,e1.doj.year);

}
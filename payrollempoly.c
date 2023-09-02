#include<stdio.h>
struct emp{
    int eno;
    char name[10];
    float bsal,nsal,gsal;
};
typedef struct emp EMP;
EMP Payroll_Process (EMP e){
    e.gsal=e.bsal+(e.bsal*0.1)+(e.bsal*0.2);
    e.nsal=e.gsal-(e.bsal*0.05+1200);
    return e;
}
int main(){
    EMP e[10];
    int i;
    for (i=0;i<3;i++){
        printf("Enter eno. name and basic salary of employee: ");
        scanf("%d %s %f",&e[i].eno,&e[i].name,&e[i].bsal);
        e[i].gsal=e[i].bsal+(e[i].bsal*0.1)+(e[i].bsal*0.2);
        e[i].nsal=e[i].gsal-(e[i].bsal*0.05+1200);
    }
    for(i=0;i<3;i++)
        printf("\nEmpID-%d Name-%s Basic Salary- %.2f Gross- %.2f Net Salary- %.2f",e[i].eno,e[i].name,e[i].bsal,e[i].gsal,e[i].nsal);
}    
#include<stdio.h>
#include<string.h>
struct student{
    int rno;
    char name[15];
    int marks[6];
    float avg;
};
int main(){
    struct student s1;
    /*
    s1 =>
    s1.rno
    s1.name[0] <-> s1.name[14]
    s1.marks[0]
    s1.marks[1]
    s1.marks[2]
    s1.marks[3]
    s1.marks[4]
    s1.marks[5]
    s1.avg
    */
    printf("Enter student roll number and name:");
    scanf("%d %s",&s1.rno,s1.name);
    int i;
    for(i=0;i<6;i++)
        scanf("%d",&s1.marks[i]);
    float sum = 0;
    for(i=0;i<6;i++)
       sum = sum + s1.marks[i];
    s1.avg = sum/6;
    printf("Roll No. - %d",s1.rno);
    printf("\nName - %s",s1.name);
    printf("\nMarks - %d ",s1.marks[0]);
    printf("%d ",s1.marks[1]);
    printf("%d ",s1.marks[2]);
    printf("%d ",s1.marks[3]);
    printf("%d ",s1.marks[4]);
    printf("%d",s1.marks[5]);
    printf("\nAverage - %.2f",s1.avg);

 

    }
    
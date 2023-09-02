// #include<stdio.h>
// int main(){
//     char name[40];
//     int marks[9];
//    /* printf("Enter a string: ");
//     scanf("%s",name);
//     printf("%s",name);*/

//     //name <=> &name[0]
//     //marks <=> &marks[0]
//     int i;
//     for(i=0;i<5;i++)
//         scanf("%c",&name[i]);
//     for(i=0;i<5;i++)
//         printf("%c",name[i]);



// }

#include<stdio.h>
#include<string.h>
int main(){
    char s1[15],s2[10];
    
    printf("Enter first string: ");
    scanf("%s",s1);
    int len= strlen(s1);
    printf("\nthe length of %s is %d",s1,len);
    
}
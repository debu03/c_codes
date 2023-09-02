// #include<stdio.h>
// // int or void and can put return 0
// int main(){
//     printf("hello world");
// }

//*******variable,const,keywords*******
#include<stdio.h>
int print();
int main()
{
    int a=1;
    printf("%d\n",a);
    scanf("%d",&a);
    printf("%d\n",a);
    print();

}
int print()
{
    printf("This is debu");
}
// #include<stdio.h>
// int main(){

//     int choice;
//     printf("1.Circle 2.Square 3.Rectangle 4.Tringle: ");
//     scanf("%d",&choice);
//     areac=math.pi*r*r;
//     areas=a*a;
//     arear=a*b;
//     areat=1/2*a*b;

//     if (choice==1)
//         printf("%d",areac);
//     else if (choice==2)
//         printf("%d",areas);
//     else if (choice==3)
//         printf("%d",arear);
//     else 
//         printf("%d",areat);
// }

// #include<stdio.h>
// int main(){

//     int ch;
//     float ar=0;

//     printf("1.Circle 2.Square 3.Rectangle 4.Tringle: ");
//     scanf("%d",&ch);

//     switch(ch){
// case 1:
//     float s,x,y;
//     float rad;
//     float side;
//     float l,b;
//     printf("enter radius:");
//     scanf("%f",&rad);
//     ar=rad*rad*3.14;
//     printf("\nThe area of circle is %f",ar);
//     break;
// case 2:
//     printf("enter side of square:");
//     scanf("%f",&side);
//     ar=side*side;
//     printf("\narea of square %f",ar);
//     break;
// case 3:
//     printf("enter dimention:");
//     scanf("%f %f",&l,&b);
//     ar=l*b;
//     printf("\narea of rec %f",ar);
//     break;
// case 4:
//     printf("enter dimentions:");
//     scanf("%f %f %f",&s,&x,&y);
//     ar=s+x+y;
//     printf("\narea of trainle is %f",ar);
//     break;
// }
//     return 0;
// }

#include<stdio.h>
int main(){

    int ch;
    float ar=0;
    float s,x,y;
    float rad;
    float side;
    float l,b;

    printf("1.Circle 2.Square 3.Rectangle 4.Tringle: ");
    scanf("%d",&ch);
    switch(ch){
case 1:
    printf("enter radius:");
    scanf("%f",&rad);
    ar=rad*rad*3.14;
    printf("\nThe area of circle is %f",ar);
    break;
case 2:
    printf("enter side of square:");
    scanf("%f",&side);
    ar=side*side;
    printf("\narea of square %f",ar);
    break;
case 3:
    printf("enter dimention:");
    scanf("%f %f",&l,&b);
    ar=l*b;
    printf("\narea of rec %f",ar);
    break;
case 4:
    printf("enter dimentions:");
    scanf("%f %f %f",&s,&x,&y);
    ar=s+x+y;
    printf("\narea of trainle is %f",ar);
    break;
    }
    return 0;
}
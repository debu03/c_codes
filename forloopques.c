
//QUESTION ONE WATER BP SWITCHCASE
// #include<stdio.h>
// int main(){

//     int bp;
//     scanf("%d",&bp);
//     switch(bp){
// case 95 ... 105 :
//     printf("Water");
//     break;
// case 358 ... 392:
//     printf("Mercury");
//     break;
// case 1128 ... 1246:
//     printf("Copper");
//     break;
// case 2048 ... 2302:
//     printf("Silver");
//     break;
// case 2547 ... 2773:
//     printf("Gold");
//     break;
// default:
//     printf("Unknown");
//     break;
//     }
//     return 0;
//}

//*******LOOPS********

// #include<stdio.h>

// int main(){
//     int i;
//     for (i=0;i<10;i=i+1)
//     {
//         printf("hello\n");
//         //we can put i++ here
//     }
//     printf("\nend");
// }
//**********FACTORIAL QUESTION***********
// #include<stdio.h>

// int main(){
//     int i;
//     int fac=1;
//     int num;
//     printf("Enter the number to get its factorial: ");
//     scanf("%d",&num);
//     for (i=1;i<=num; i=i+1)
//         fac=fac*i;
//         printf("factorial is: %d ",fac);  
//     }

// #include <stdio.h>
// int main()
// {
//     int n,i,f;
//     f=i=1;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         f=f*i;
//         i=i+1;
//     }
//     printf("The Factorial of %d is : %d",n,f);
// }
//****************Printing table*****************
// #include <stdio.h>
// int main()
// {
//     int n;
//     int i;
//     int pro;
//     i=0;
//     printf("Table of %d:\n",n);
//     scanf("%n",&n);
//     while(i<=9)
//     {
//         i=i+1;
//         pro=n*i;
    
//     printf("\n%d*%d=%d",n,i,pro);}
// }

//*************FIBONNACI SERIES*************

// #include<stdio.h>    
// int main()    
// {    
//  int n1=0,n2=1,n3,i,number;    
//  printf("Enter the number of elements:");    
//  scanf("%d",&number);    
//  printf("\n%d %d",n1,n2);
//  for(i=2;i<number;i++)   
//  {    
//   n3=n1+n2;    
//   printf(" %d",n3);    
//   n1=n2;    
//   n2=n3;    
//  }  
//   return 0;  
//  }    


//**********SUM OF DIGIT****************

// #include<stdio.h>

// int main(){
//     int num,sum,d;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     sum=0;
//     for (;num>0;num=num/10)
//         sum=sum+(num%10);
//         printf("the sum is %d",sum);


// }

***********REVERSING NUMBER***********
#include <stdio.h>

int main()
{
    int num,rem,reverse=0;
    printf("Enter a number for find reverse\n");
    scanf("%d",&num);
    for(;num!=0; num=num/10){
        rem=num%10;
        reverse=reverse*10+rem;
    }
    printf("Reverse of the given number %d",reverse);
    return 0;
}


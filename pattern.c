#include <stdio.h>

int main()

{

    int flag = 0, k = 11, i = 0;

    while(k--)

    {

      for(int j = 0; j <= i; j++)

      {

         printf("%d ", j);

      }

    printf("\n");

    if(i == 5)

      flag = 1;

    if(flag == 0)

      i++;

    else

      i--;

    }

}
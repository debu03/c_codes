#include <stdio.h>
void prefix()
{
    int i,j,len;
    char str[15];
    printf("Enter a atring: ");
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++)
    for ( i = 0; i < len; i++)
    {
        printf("%c",str[j]);
    
    }
    printf("\n");
    
}

int main(){
    prefix();
}

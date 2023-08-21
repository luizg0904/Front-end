#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("digite a idade: ");
    scanf("%d", &num);
    if(num<18){
     printf("menor que 18 anos");

    }

    else{
     printf("maior que 18 anos");

    }

    return 0;
}

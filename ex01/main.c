#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x=1;
    switch(x)
    {
    case 1:
    case 9:
        printf("Um\n");
        //break;
        printf("Nove\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }

    //printf("Hello world!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f1=9.3;
    for (int i=0;i<1000;i++)
    {
     printf("f1=%.2f\n", f1);
     f1 = f1 + 0.1;
    }
    return 0;
}

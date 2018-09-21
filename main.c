#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 15;
    int b = 99;
    int temp;

    printf("a = %d and b = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;


    printf("After swapping: a = %d, and b = %d \n", a, b);

    return 0;
}

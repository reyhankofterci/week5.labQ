#include <stdio.h>
#include <stdlib.h>

void fun(int *x, int *y, int *z)
{
}

int main()
{
    int x, y, z;
    x = 5;
    y = 6;
    z = 7;
    printf("The value before swapping are:\n");
    printf("element 1=%d\n", x);
    printf("element 2=%d\n", y);
    printf("element 3=%d\n", z);

    fun(&x, &y, &z);

    printf("The value after swapping are:\n");
    printf("element 1=%d\n", z);
    printf("element 2=%d\n", x);
    printf("element 3=%d\n", y);

    return 0;
}

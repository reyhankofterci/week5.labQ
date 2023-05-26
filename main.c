#include <stdio.h>
#include <stdlib.h>

void sum(int *x, int *y, int *sonuc)
{
    *sonuc = *x + *y;
}

int main()
{
    int x, y, sonuc;
    printf("ilk sayiyi girin:");
    scanf("%d", &x);

    printf("ikinci sayiyi girin:");
    scanf("%d", &y);

    sum(&x, &y, &sonuc);
    printf("girilen sayilarýn toplami:%d", sonuc);
    return 0;
}

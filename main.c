#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&i);

    int dizi[i], *p, k;

    for(int a=0; a<i; a++)
    {
        printf("element - %d : ",a);
        scanf("%d",&k);
        dizi[a]=k;
    }

    p = dizi;

    for(int a=0; a<i; p++, a++)
    {
        printf("element - %d : %d\n", a, *p);
    }

    return 0;
}

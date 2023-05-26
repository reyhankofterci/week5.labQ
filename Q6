#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;

    printf("Input the number of elements to store in the array : ");
    scanf("%d",&i);

    int dizi[i],*p,k,sum=0;

    for(a=0; a<i; a++)
    {
        printf("element - %d : ",a);
        scanf("%d",&k);
        dizi[a]=k;
    }

    p = dizi;

    for(a = 0; a<i; p++, a++)
    {
        sum+=*p;
    }
    printf("The Sum of the array : %d",sum);
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, n;
    for( n=100; n<1000; n++ )
    {
        a = n / 100;
        b = (n-a*100) / 10;
        c = n % 10;
        if(n == pow(a,3) + pow(b,3) + pow(c,3))
            printf("%d  ", n);
    }
    printf("\n");
    return 0;
}
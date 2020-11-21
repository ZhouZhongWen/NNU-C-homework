#include <stdio.h>

int prime (int a);

int main()
{
    int n,a;
    scanf("%d",&a);
    n=prime(a);
    printf("%d",n);
    if (n==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}

int prime (int a)
{
    int result;
    result=1;
    for (int i=2;i<a;i++)
    {
        if (a%i==0)
            result=0;
        break;
    }
    return result;
}
#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=0;
    printf("MIN IS:");
    if (a<b)
        d=a;
    else
        d=b;
    if (d<c)
        printf("%d",d);
    else
    {
        d=c;
        printf("%d",d);
    }
    return 0;
}

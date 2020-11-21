#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    double s,S;
    scanf("%d%d%d",&a,&b,&c);
    s=(double)(a+b+c)/2;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf\n",S);
    return 0;
}
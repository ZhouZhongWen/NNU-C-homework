#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d\t%d\n", a,b);
    return 0;
}

#include <stdio.h>

int main() {
    float a,c;
    int b;
    scanf("%f",&a);
    b=a;
    c=a-(float)b;
    if (a>0)
        printf("sign:+\n");
    else
        printf("sign:-\n");
    printf("integral part:%d\n",b);
    printf("decimal fraction part:%f\n",c);
    return 0;
}
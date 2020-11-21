#include <stdio.h>
#include <math.h>
int main() {
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    printf("sin(x)=%f\n",sin(x));
    printf("cos(x)=%f\n",cos(x));
    printf("|x|=%f\n",fabs(x));
    printf("e的x次方=%f\n",exp(x));
    printf("x的y次方=%f\n",pow(x,y));
    return 0;
}

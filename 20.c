#include <stdio.h>
#include <math.h>
int main() {
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    printf("sin(x)=%f\n",sin(x));
    printf("cos(x)=%f\n",cos(x));
    printf("|x|=%f\n",fabs(x));
    printf("e��x�η�=%f\n",exp(x));
    printf("x��y�η�=%f\n",pow(x,y));
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,x1,x2,delta;
    scanf("%f%f%f",&a,&b,&c);
    delta=pow(b,2)-4*a*c;
    while (delta<0)
    {
        printf("no result.\n");
        scanf("%f%f%f", &a, &b, &c);
    }
    x1=(-b+sqrtf(delta))/2*a;
    x2=(-b-sqrtf(delta))/2*a;
    printf("%f%f",x1,x2);
    return 0;
}

/*
#include <stdio.h>

int exhaustive (int a,int b);

int main ()
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=exhaustive(a,b);
    printf("%d",m);
    return 0;
}

int exhaustive (int a ,int b)
{
    int k;
    if (a>=b) {
        for (int i = 1; i <= a; i++) {
            if (a % i == 0 && b % i == 0)
                k = i;
        }
    }
    else {
        for (int i = 1; i <= b; i++) {
            if (a % i == 0 && b % i == 0)
                k = i;
        }
    }
    return k;
}
 */

#include<stdio.h>
int main()
{
    int a,b,min,max,i=1,n=1;
    printf("input a and b:\n");
    scanf("%d%d",&a,&b);
    while (a<0||b<0) {
        printf("Wrong number\ninput a and b:");
        scanf("%d%d", &a, &b);
    }
    if(a<=b)
    {
        min=a;
        max=b;
    }
    else
    {
        min=b;
        max=a;
    }
    while(i<=min)
    {
        if((min%i==0)&&(max%i==0))
        {
            n=i;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("%d is the grestest common divisor\n",n);
    return 0;
}
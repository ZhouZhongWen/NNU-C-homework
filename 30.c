#include <stdio.h>

int division (int a,int b);
int main() {
    int a,b,k,m;
    scanf ("%d%d",&a,&b);
    k=division(a,b);
    printf("%d",k);
    m=(a*b)/k;
    printf("%d",m);
    return 0;
}

int division (int a, int b){
    int i=1;
    if (a>=b){
        do {
            i = a % b;
            a = b;
            b = i;
        }while (i!=0);
        return b;
        }
    else {
        while (i !=0) {
            i = b % a;
            b=a;
            a=i;
        }
        return a;
    }
}
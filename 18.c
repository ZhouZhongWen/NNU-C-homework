#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    printf("Please input complex number one\n");
    printf("realpart:");
    scanf("%d",&a);
    printf("imagpart:");
    scanf("%d",&b);
    printf("Please input complex number two\n");
    printf("realpart:");
    scanf("%d",&c);
    printf("imagpart:");
    scanf("%d",&d);
    e=a+c;
    f=b+d;
    if (b>0&&d>0)
        printf("(%d+%di)+(%d+%di)=%d+%di",a,b,c,d,e,f);
    else if (b>0&&d<0)
        printf("(%d+%di)+(%d%di)=%d+%di",a,b,c,d,e,f);
    else if (b<0&&d>0)
        printf("(%d%di)+(%d+%di)=%d+%di",a,b,c,d,e,f);
    else
        printf("(%d%di)+(%d%di)=%d%di",a,b,c,d,e,f);
    return 0;
}

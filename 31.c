#include <stdio.h>

int main(){
    int sum=0,a;
    for (int i=1;i<=10;i++)
    {
        a=1;
        for (int j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}
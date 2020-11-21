#include <stdio.h>

int main() {
    int sum;
    for (int i=1;i<=100;i++){
        sum=sum+1/i;
    }
    printf("%d",sum);
    return 0;
}

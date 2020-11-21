#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[99],a;
    srand(time(NULL));
    for (int i=0;i<=99;i++)
    {
        A[i]=rand()%101;
        printf("%d\t",A[i]);
    }
    printf("\n");
    for (int j=0;j<99;j++)
    {
        if (A[j]>A[a]) {
            a = j;
        }
    }
    printf("No.%d is the largest,%d",a,A[a]);
    return 0;
}
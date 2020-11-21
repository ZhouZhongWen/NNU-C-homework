#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[99],a=0,i;
    srand(time(NULL));
    for (int i=0;i<=99;i++)
    {
        A[i]=rand()%101;
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("\n");
    i=0;
    scanf("%d",&i);
    for (;i<=99;i++)
    {
        A[i]=A[i+1];
    }
    for (int i=0;i<99;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}
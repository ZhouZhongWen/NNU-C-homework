//??????? ??¦Á??????? ????
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[99],a=0;
    srand(time(NULL));
    for (int i=0;i<=99;i++)
    {
        A[i]=rand()%101;
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i <=99; i++) {
        for (int j = 0; j <= 99 - i; j++) {
            if (A[j] > A[j + 1]) {
                int tmp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = tmp;
            }
        }
    }
    for (int i=0;i<=99;i++)
        printf("%d\t",A[i]);
    return 0;
}
*/


//??????? ??¦Á?????????? ???????
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[99],a=0;
    srand(time(NULL));
    for (int i=0;i<=99;i++)
    {
        A[i]=rand()%101;
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i <=98 ; i++)
    {
        int index = i;
        for (int j = i + 1; j <=99; j++)
        {
            if (A[index] > A[j])
            {
                index = j;
            }
        }
        if (i != index)
        {
            int tmp = A[i];
            A[i] = A[index];
            A[index] = tmp;
        }
    }
    for (int i=0;i<=99;i++)
        printf("%d\t",A[i]);
    return 0;
}
//二分查找（递归）

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int recurbinary(int *a, int key, int low, int high);
int main()
{
    int A[99],key;
    srand(time(NULL));
    for (int i=0;i<99;i++)
    {
        A[i]=rand()%101;
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("\n");
    printf( "%d\n", recurbinary(A,key,0,sizeof(A)/sizeof(A[0])-1) );
}

//递归算法
int recurbinary(int *a, int key, int low, int high)
{
    int mid;
    if(low > high)
        return -1;
    mid = low + (high-low)/2;
    if(a[mid] == key) return mid;
    else if(a[mid] > key)
        return recurbinary(a,key,low,mid -1);
    else
        return recurbinary(a,key,mid + 1,high);
}
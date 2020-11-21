/*
#include <stdio.h>

int main()
{
    int a[20];
    a[0]=1;a[1]=1;
    for (int i=2;i<=20;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for (int i=0;i<=20;i++)
        printf("%d\t",a[i]);
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,j,z,n,k;
    scanf("%d",&k);
    k = k / 2 +1;
    for(i=1,n=1; i<= k; i++)
    {
        n = 2*i-1;
        for(j=k-i; j>0; j--)
        {
            printf(" ");
        }
        for(z=0; z< n; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    n-=2;
    for(i=0; i<k-1; i++)
    {
        for(j=0; j<i+1; j++)
        {
            printf(" ");
        }
        for(z=n-2*i; z>0; z--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
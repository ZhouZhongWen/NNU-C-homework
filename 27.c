#include <stdio.h>
int isp(int n);

int main ()
{
    int i,j=0;
    for(i=2;i<=100;i++)
        if(isp(i)){
            printf("%d ",i);
            j++;
            if(j==5){
                printf("\n");
                j=0;
            }
        }
    return 0;
}

int isp(int n){
    int i;
    for(i=2;i<n;i++)
        if(n%i==0) return 0;
    return 1;
}
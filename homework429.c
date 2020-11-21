#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    int a[10][10],count;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            a[i][j]=rand()%101;
        }
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<10;i++){
        int max=a[i][0],tempi=i,tempj=0;
        for(int j=1;j<10;j++){
            if(a[i][j]>max){
                max=a[i][j];
                tempj=j;
            }
        }
        int flag=1;
        for(int k=0;k<10;k++){
            if(a[k][tempj]<max){
                flag=0;
                break;
            }
        }
        if(flag==1){
            count++;
            printf("\nThe saddle point of this matrix is (%d,%d):%d\n",tempi,tempj,max);
        }
    }
    if(count==0){
        printf("This matrix have no saddle point.\n");
    }
    return 0;
}

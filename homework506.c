
#include <stdio.h>
int main()
{
    int a,b,c,flag;
    printf("请输入年份=");
    scanf("%d",&a);
    printf("请输入月份=");
    scanf("%d",&b);
    printf("请输入日=");
    scanf("%d",&c);

    if(((a%4==0)&&(a%100!=00))||(a%400==0))
                flag=1;                //闰年
            else
                flag=0;
    int sum=0,d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0;i<=12;i++){
        if (b==i+1){
            break;
        }
        sum+=d[i];
    }
    sum=sum+c;
    if (flag=1 && b>2){
        sum=sum+1;
    }
    printf("天数为%d",sum);
    return 0;
}



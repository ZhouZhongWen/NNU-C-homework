#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
}date1;

int main()
{
    int flag;
    printf("���������=");
    scanf("%d",&date1.year);
    printf("�������·�=");
    scanf("%d",&date1.month);
    printf("��������=");
    scanf("%d",&date1.day);

    if(((date1.year%4==0)&&(date1.year%100!=00))||(date1.year%400==0))
                flag=1;                //����
            else
                flag=0;
    int sum=0,d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0;i<=12;i++){
        if (date1.month==i+1){
            break;
        }
        sum+=d[i];
    }
    sum=sum+date1.day;
    if (flag=1 && date1.month>2){
        sum=sum+1;
    }
    printf("����Ϊ%d",sum);
    return 0;
}
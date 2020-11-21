/*
#include <stdio.h>
int main( )
{ int a , b , c ,t;
    scanf("%d , %d , %d" , &a , &b ,&c) ;
    printf("\n\n a=%d , b=%d , c=%d \n" ,a , b , c) ;
    if(a>b)
    {t=a ; a=b ; b=t ;}
    if(a>c)
    {t=a ; a=c ; c=t ;}
    if(b>c)
    {t=b ; b=c ; c=t ;}
    printf("\n\n a=%d , b=%d , c=%d \n" ,a , b , c) ;
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("请输入年份=");
    scanf("%d",&i);
    printf("请输入月份=");
    scanf("%d",&j);
    switch(j)
    {
        case 1: n=31;break;
        case 2: {
            if(((i%4==0)&&(i%100!=00))||(i%400==0))
                n=29;
            else
                n=28;
        }
        break;
        case 3: n=31;break;
        case 4: n=30;break;
        case 5: n=31;break;
        case 6: n=30;break;
        case 7: n=31;break;
        case 8: n=31;break;
        case 9: n=30;break;
        case 10: n=31;break;
        case 11: n=30;break;
        case 12: n=31;break;
    }
    printf("%d年%d月份天数是%d\n",i,j,n);
}

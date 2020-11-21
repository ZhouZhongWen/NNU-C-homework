/*
#include <stdio.h>

int geweishuzi(int a);
int main()
{
    int a;
    scanf("%d",&a);
    geweishuzi(a);
    return 0;
}

int geweishuzi(int a)
{
    int t=0,mask=1;
	t=a;
	while(t>9){
		t/=10;
		mask*=10;
	}
	while(mask>0){
	 	printf("%d ",a/mask);
		a%=mask;
		mask/=10;
	} 
}
*/

#include <stdio.h>

int zhuanjinzhi(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",zhuanjinzhi(a));
    return 0;
}

int zhuanjinzhi(int a)
{
    { if(a<2)
        return a; 
    else
    {
        return zhuanjinzhi(a/2)*10+a%2;
    } 
    } 
}
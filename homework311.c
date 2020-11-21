#include <stdio.h>
#include <stdlib.h>
int GCD(int a,int b);
int main()
{
	int a,b,result;
	printf("please input two numbers:");
	scanf("%d %d",&a,&b);
	result=GCD(a,b);
    printf("%d",result);
	system("pause");
	return 0;
}

int GCD(int a,int b)
{
   int i=1,r;
   for(;i<=a&&i<=b;i++)
   {if(a%i==0&&b%i==0)
   r=i;}
   return r;
}

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int PN(int);

int main()
{
	int a;
    for(a=-100;a<=200;a++)
	{
	 if(PN(a))
       printf("%d ",a);}
	system("pause");
	return 0;
}

int PN(int a)
{
	//r=1 means "a" isn't prime number
	int i,r=1;
	if(a==-1||a==0||a==1)
	{r=0;return r;}
	for(i=2;i<fabs(a);i++)
	{
		if(a%i==0)
		{r=0;return r;}
	}
	if(r==1)
		return r;
}
*/

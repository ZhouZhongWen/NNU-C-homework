#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main()
{
	int n,r=0,i=0;
	char str[20];
	printf("Please input a string composed with numbers:");
	gets(str);
	n=strlen(str);
	while(str[i]!='\0')
	{r=r+(str[i]-'0')*pow(10,n-1);
	i++;
	n--;}
	printf("%d",r);
	system("pause");
}

/*
#include<stdlib.h>
#include<stdio.h>
void input(int a[]);
void output(int a[]);
void sort();
void main()
{
	int score[10];
	input(score);
	sort(score);
	output(score);
	system("pause");
}

void input(int a[])
{
	int i;
	printf("Please input 10 numbers:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}

void sort(int a[])
{   int index,i,tempt,n;
	for(index=1;index<=9;index++)
	{	for(i=0;i<=9&&i<index;i++)
	{	if(a[index]<a[i])
			{
				tempt=a[index];
			    for(n=index;n>i;n--)
				{a[n]=a[n-1];}
		 	    a[i]=tempt;
				break;
			}
	}
	}

}

void output(int a[])
{
	int i;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void int_str(int x);
void main()
{
	int x;
	printf("Please input a number smaller than 1000000000:");
	scanf("%d",&x);
	int_str(x);
	system("pause");
}

void int_str(int x)
{   int i=0,j,t;
    char s[20];
	while(x!=0)
	{s[i++]=x%10+'0';x=x/10;}
	s[i]='\0';
	for(j=0;j<i/2;j++)
	{t=s[j];s[j]=s[i-j-1];s[i-j-1]=t;}
	puts(s);
}

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[6],index=0,i,tempt;
	printf("please input six numbers:");
	for(i=0;i<=5;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=5;i++)
	{	
		if(a[i]<a[index])
	       index=i;
	}
	tempt=a[0];a[0]=a[index];a[index]=tempt;
    for(i=0;i<=5;i++)
		printf("%d ",a[i]);
	system("pause");
	return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[6],i,index,tempt,n;
	printf("please input six numbers:");
	for(i=0;i<=5;i++)
       scanf("%d",&a[i]);
	for(index=1;index<=5;index++)
	{	for(i=0;i<=5&&i<index;i++)
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
   for(i=0;i<=5;i++)
	   printf("%d ",a[i]);
   system("pause");
   return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int a,r=0;
    printf("please input string1:");
	gets(str1);
    printf("please input string2:");
	gets(str2);
	for(a=0;a<20;a++)
		if(str1[a]<str2[a])
		{r=-1;break;}
		else
			if(str1[a]>str2[a])
			{r=1;break;}
			else
				continue;
	if(r==-1)
		printf("%s<%s",str1,str2);
	else
		if(r==1)
			printf("%s>%s",str1,str2);
		else
			printf("%s=%s",str1,str2);
	system("pause");
	return 0;
}

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int s[8][8]={{1}};
    int a,b;
	for(a=1;a<8;a++)
		for(b=0;b<8;b++)
			if(b==0)
				s[a][b]=1;
			else
				s[a][b]=s[a-1][b-1]+s[a-1][b];
	for(a=0;a<8;a++)
	{for(b=0;b<8;b++)
	{if(s[a][b]!=0)
		printf("%d ",s[a][b]);}
	printf("\n");}
	system("pause");
		return 0;

}
*/
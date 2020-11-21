#include <stdio.h>
#include <stdlib.h>
struct score
{
    int a;
    int b;
    int c;
};

struct student 
{
    int id;
    char name[8];
    struct score score;
};

void output (struct student stu[],int n);

int main()
{
    int n;
    struct student stu[5]={
        {1,"A",{90,90,90}},
        {2,"B",{80,80,80}},
        {3,"C",{70,70,70}},
        {4,"D",{60,60,60}},
        {5,"E",{100,100,100}}
    };
    scanf("%d",&n);
    output(stu,n-1);
}

void output(struct student stu[],int n)
{
    printf("%d,%s,%d-%d-%d\n",stu[n].id,stu[n].name,stu[n].score.a,stu[n].score.b,stu[n].score.c);

}
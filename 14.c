#include <stdio.h>

int main() {
    char a,b;
    int a_math,a_physics,a_chemstry,b_math,b_physics,b_chemstry;
    printf("请输入两名同学的名字");
    scanf(" %c %c",&a,&b);
    printf("\n");
    printf("请分别输入第一位同学的数理化成绩：\n");
    scanf("%d%d%d",&a_math,&a_physics,&a_chemstry);
    printf("请分别输入第二位同学的数理化成绩：\n");
    scanf("%d%d%d",&b_math,&b_physics,&b_chemstry);
    printf("**************************************************************\n");
    printf("NAME\tMATH\tPHYSICS\tCHEMSTRY\tSUM\tAVERAGE\n");
    printf("%c\t%d\t%d\t%d\t\t%d\t%d\n",a,a_math,a_physics,a_chemstry,a_math+a_physics+a_chemstry,(a_math+a_physics+a_chemstry)/3);
    printf("%c\t%d\t%d\t%d\t\t%d\t%d\n",b,b_math,b_physics,b_chemstry,b_math+b_physics+b_chemstry,(b_math+b_physics+b_chemstry)/3);
    printf("**************************************************************\n");
    return 0;
}

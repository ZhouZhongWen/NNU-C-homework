#include <stdio.h>

int main() {
    char a,b;
    int a_math,a_physics,a_chemstry,b_math,b_physics,b_chemstry;
    printf("����������ͬѧ������");
    scanf(" %c %c",&a,&b);
    printf("\n");
    printf("��ֱ������һλͬѧ�������ɼ���\n");
    scanf("%d%d%d",&a_math,&a_physics,&a_chemstry);
    printf("��ֱ�����ڶ�λͬѧ�������ɼ���\n");
    scanf("%d%d%d",&b_math,&b_physics,&b_chemstry);
    printf("**************************************************************\n");
    printf("NAME\tMATH\tPHYSICS\tCHEMSTRY\tSUM\tAVERAGE\n");
    printf("%c\t%d\t%d\t%d\t\t%d\t%d\n",a,a_math,a_physics,a_chemstry,a_math+a_physics+a_chemstry,(a_math+a_physics+a_chemstry)/3);
    printf("%c\t%d\t%d\t%d\t\t%d\t%d\n",b,b_math,b_physics,b_chemstry,b_math+b_physics+b_chemstry,(b_math+b_physics+b_chemstry)/3);
    printf("**************************************************************\n");
    return 0;
}

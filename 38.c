#include <stdio.h>
#include <string.h>

int main(){
    char a[]={"I am a student.My age is 18.His age is 19."};
    int len=strlen(a),count1=0,count2=0;
    for (int i=0;i<=len;i++)
    {
        if (a[i]>='A'&& a[i]<='Z'||a[i]>='a'&& a[i]<='z')
            count1++;
        else if (a[i]>='0'&& a[i]<='9')
            count2++;
    }
    printf("%d\n%d\n",count1,count2);
    return 0;
}
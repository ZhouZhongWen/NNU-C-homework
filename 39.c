#include <string.h>
#include <stdio.h>

int main()
{
    char a[]={"I am a student.My age is 18.His age is 19."};
    int len=strlen(a),count=0;
    for (int i=0;i<=len;i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') &&(a[i+1]==' ' ||a[i+1]=='.'))
            count++;
    }
    printf("%d",count);
    return 0;
}
//也可以判断字母且前一位为空格
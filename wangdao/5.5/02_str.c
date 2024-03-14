#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int len = 0;
    char c[20] = {0};
    char d[100] = "world";
    gets(c);
    len = strlen(c); //计算字符串长度
    strcat(c,d); //将d中字符串拼到c后面
    strcpy(d,c); //将c中字符复制到d
    puts(d);
    printf("length=%d\n", len);
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
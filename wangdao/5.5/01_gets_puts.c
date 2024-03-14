#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    char c[20];
    gets(c); //参数放数组名即可
    puts(c); //只能打印字符，等价于 printf("c=%s\n", c);puts参数为字符指针
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h> //malloc头文件
#include <string.h>
 
int main()
{
    int s = 0; //s代表要申请多大字节的空间
    char *p;
    scanf("%d", &s);
    // malloc返回的是void*，即无类型指针,void*类型指针不能偏移，所以需要手动类型转换
    p = (char*)malloc(s); //malloc返回对应空间首地址
    p[0] = 'h';
    p[1] = 'o';
    p[2] = 'w';
    p[3] = '\0';
    puts(p);
    free(p); //有借有还，用完要free。必须使用malloc申请时返回的指针值，不能进行偏移

    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    char c[10] = {0};
    char d[10] = {0};
    // scanf("%s", c); //字符数组名c中存储了数组的起始地址，因此不用取地址
    scanf("%s%s", c, d); // %s 和 %d、%f一样，读取时会清除空格从而忽略空格
    printf("%s %s\n", c, d);
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
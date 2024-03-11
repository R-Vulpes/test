#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int i = 123; //十进制赋值
    int j = 0173; //八进制赋值，前面加0
    int k = 0x7b; //十六进制赋值，前面加0x
    printf("%d\n", i); // 十进制打印   
    printf("%o\n", i); // 八进制打印
    printf("%x\n", i); // 十六进制打印
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
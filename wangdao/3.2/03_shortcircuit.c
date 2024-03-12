#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//  逻辑与和逻辑或 短路运算
int main()
{
    int i = 0;
    i && printf("you can't see me\n"); //i为假时不会执行逻辑与后面的表达式，称为短路运算
 
    i = 1;
    i || printf("you can't see me\n"); //i为真时不会执行逻辑或后面的表达式，称为短路运算；因为i为真时整个逻辑或表达式为真，i为假时继续往后执行
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 1、printf输出格式控制
int main()
{
    float i = 10;
    int j = 20;
    // %5.2f表示数字占据5个位置，其中2位是小数位
    printf("整数输出%5d,浮点数输出%5.2f\n", j, i);

    // -号表示左对齐
    printf("整数输出%-5d,浮点数输出%5.2f\n", j, i);

    system("pause");
    return 0;
}
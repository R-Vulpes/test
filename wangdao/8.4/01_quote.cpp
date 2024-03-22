#include<stdio.h>
#include<stdlib.h>
// 在子函数内修改外面主函数变量的值
void modify_num(int &b)//形参中写&，称为引用，不叫取地址
{
    b++;
}

int main()
{
    int a = 10;
    modify_num(a);
    printf("a=%d\n", a);
    system("pause");
    return 0;
}
// 以上等价于纯C代码：
// void modify_num(int *b)//形参中写&，称为引用，不叫取地址
// {
//     (*b)++; //*和++都为单目运算符，*b++结合方向为从右到左：*(b++)
// }

// int main()
// {
//     int a = 10;
//     modify_num(&a);
//     printf("a=%d\n", a);
//     system("pause");
//     return 0;
// }



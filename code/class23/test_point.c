#include <stdio.h>
#include <stdlib.h>
//指针
//内存会划分为一个个内存单元（每个内存单元大小为一个字节），每个单元有一个编号
//内存单元的编号=地址=指针
//存放指针（地址）的变量就是指针变量
//指针变量的大小取决于一个地址存放需要多大的空间
// 32位机器上的地址：32bit位-4byte，指针变量的大小是4个字节
// 64位机器上的地址：64bit位-8byte，指针变量的大小是8个字节
//如printf("%zu\n",sizeof(char*));

int main()
{
    int a = 10;
    &a;
    printf("%p\n", &a);
    //%p打印地址

    int* p = &a;
    //*说明p为指针变量；int说明p指向的对象是指针类型

    printf("%p\n", p);

    *p = 20;
    //解引用操作符，找到p指向的对象

    printf("%d\n", *p);

    system("pause");
    return 0;
}

// 连续初始化
// int main()
// {
//     // int a, b, c;
//     // a = 1;
//     // b = 2;
//     // c = 3;
//     int a = 1, b = 2, c = 3;
//     printf("%d\n", a);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     system("pause");
//     return 0;
// }
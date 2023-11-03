#include <stdio.h>
#include <stdlib.h>

// int main()
// {
// int a = 10;
// if (a = 3)
// //1、if为真才会执行；if后面只能跟一条语句，有多条语句需要加{}
//     printf("hehe\n");

// if (a < 18)
//     printf("青少年\n");
// else if (a >= 18 && a < 28)
// // 2、不能写作 18<=a<28,这个结果为(18<=10)为0假<28为真，此时也会打印
//     printf("青年\n");
// else
//     printf("老年\n");

// // 3、else 的悬空：没有大括号的时候else只和离得最近的if匹配
// // 4、if-else合起来是一条语句
// int a = 0,b = 2;
// if (a == 1)
//     if (b == 2)
//         printf("hehe\n");
// else
//     printf("haha\n");

// system("pause");
// return 0;
// }

// 变量命名规范，有意义
// 条件判断把常量放在变量左边：5 == num 这样写成 5 = num 会报错，利于代码debug
// int main()
// {
//     char firstname[20] = {0};
//     char first_name[20] = {0};
//     char FirstName[20] = {0};

//     system("pause");
//     return 0;
// }

// 判断一个数是否为奇数
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     if (num % 2 == 0)
//         printf("偶数\n");
//     else
//         printf("奇数\n");

//     system("pause");
//     return 0;
// }

// 输出1-100的奇数
int main()
{
    int i = 0;
    while (i >= 0 && i < 100)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
    }

    system("pause");
    return 0;
}

// int main()
// {
//    system("pause");
//    return 0;
// }
#include<stdio.h>
#include<stdlib.h>

// scanf用来读取标准输入，scanf需要把输入内容放入一个变量空间，因此需要取地址
// scanf会阻塞，是因为标准输入缓冲区是空的，等待输入
// int main()
// {
//     int i = 0;
//     float j = 10.999;
//     char c = 'a';
//     scanf("%d", &i); //scanf需要输入换行启动执行
//     printf("i=%d\n", i);
//     // fflush(stdin); //清空标准输入缓冲区，避免下一个scanf读取剩余的\n
//     // scanf("%c", &c);
//     // printf("c=%c\n", c);
//     scanf("%f", &j); //读取浮点型、整型、字符串时忽略\n和\0
//     printf("j=%.2f", j);

//     system("pause");
//     return 0;
// }


int main()
{
    int i = 0,ret = 0;
    float f = 0.0;
    char c = 'a';

    ret = scanf("%d %c%f", &i, &c, &f); //ret值为scanf匹配成功的个数，想要正确匹配输入值，在%c前加空格即可
    printf("i=%d, c=%c, f=%.2f", i, c, f);

    system("pause");
    return 0;
}


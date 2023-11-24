#include <stdio.h>
#include <stdlib.h>

// 字符常量/变量在内存中以ascii码值存储
// int main()
// {
//     printf("%c\n",'a');
//     printf("%c\n",97);

//     system("pause");
//     return 0;
// }

// 1、 BC13_将ascii码值的对应字符输出
// int main()
// {
//     int arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
//     // 也可用char定义，内 存放ascii码值
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     while (i < sz)
//     {
//         printf("%c", arr[i]);
//         i++;
//     }
//     system("pause");
//     return 0;
// }

// 2、BC14_出生日期输入输出
// 输入输出的格式控制
// int main()
// {
//     int year = 0, month = 0, date = 0;
//     scanf("%4d%2d%2d", &year, &month, &date);
//     printf("year=%d\n",year);
//     printf("month=%02d\n",month);
//     printf("date=%02d\n",date);
//     system("pause");
//     return 0;
// }

// 3、BC11_学生基本信息输入输出
// int main()
// {
//     int id = 0;
//     float c = 0.0f, math = 0.0f, eng = 0.0f;
//     scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//     printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//     system("pause");
//     return 0;
// }

// 3、BC11_学生基本信息输入输出
// int main()
// {
//     int id = 0;
//     float c = 0.0f, math = 0.0f, eng = 0.0f;
//     scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//     printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//     system("pause");
//     return 0;
// }

// 4、BC9_printf的返回值
// int main()
// {
//     // printf("Hello world!\n");不需要此行，n赋值的同时，printf也会运行
//     int n = printf("Hello world!");
//     printf("\n%d", n);
//     system("pause");
//     return 0;
// }

// 5、BC131_转义字符"\"
// int main()
// {
//     printf("printf(\"Hello world!\\n\");\n");
//     printf("cout << \"Hello world!\" << endl;\n");
//     system("pause");
//     return 0;
// }

// 6、BC59_四个数找最大数
// int max(int a, int b)
// {
//     if (a < b)
//     {
//         return b;
//     }
//     else
//     {
//         return a;
//     }
// }
// int main()
// {
//     int arr[4] = {0};
//     int i = 0;
//     int MAX = 0;
//     while (i < 4)
//     {
//         scanf("%d", &arr[i]);
//         MAX = max(MAX, arr[i]);
//         i++;
//     }
//     printf("%d\n", MAX);
//     system("pause");
//     return 0;
// }

// 7、BC27_给定半径求球体积
// int main()
// {
//     float r = 0.0f;
//     float pi = 3.1415926;
//     float V = 0.0f;
//     scanf("%f", &r);
//     V = 4.0 / 3 * pi * r * r * r;
//     printf("%.3f\n", V);
//     // double定义的代码
//     // double r = 0.0;
//     // double pi = 3.1415926;
//     // double V = 0.0;
//     // scanf("%lf", &r);
//     // V = 4.0 / 3 * pi * r * r * r;
//     // printf("%.3lf\n", V);
//     system("pause");
//     return 0;
// }

// 8、BC25_计算BMI指数
int main()
{
    int w = 0, h = 0;
    float BMI = 0.0f;
    scanf("%d %d", &w, &h);
    BMI = w / ((h / 100.0) * (h / 100.0));
    printf("%.2f\n", BMI);
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
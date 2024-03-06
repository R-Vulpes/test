#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// //  strcpy函数
// int main()
// {
//     char arr1[20] = {0};
//     char arr2[20] = "Hello bit";
//     // char *a = strcpy(arr1, arr2);
//     printf("arr1为%s\n", arr1);

//     system("pause");
//     return 0;
// }
 
// //  memset函数
// int main()
// {
//     char arr[20] = "hello world";
//     memset(arr, 'x', 5);
//     printf("%s\n", arr);
//     system("pause");
//     return 0;
// }

// // 写一个函数，返回两个数的较大值
// int max(int num1, int num2)
// {
//     // if (num1 < num2)
//     // {
//     //     return num2;
//     // }
//     // else
//     //     return num1;
//     return (num1 > num2 ? num1 : num2);
// }

// int main()
// {
//     int num3 = 0, a = 0, b = 0;
//     scanf("%d %d", &a, &b);
//     num3 = max(a,b);
//     printf("max=%d\n", num3);

//     system("pause");
//     return 0;
// }

// 写一个函数可以交换两个整型变量的内容
// x,y为形参
// void change(int x, int y)
// {
//     int save = 0;
//     save = x;
//     x = y;
//     y = save;
// }——错误
void change(int* x, int* y)
{
    int save = *x;
    *x = *y;
    *y = save;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("before,a=%d,b=%d\n", a,b);
    // a,b为实参，当实参传递给形参的时候，形参是实参的一份临时拷贝
    // 对形参的修改不会影响实参
    // 实参：真实传递给函数的参数
    // change(a,b);——错误
    change(&a,&b);
    printf("now,a=%d,b=%d", a,b);
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
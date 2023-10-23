#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()

// const修饰的常变量
//  int main()
//  {
//      const int a = 10; //const修饰的 常变量 ，本质是变量但不能直接被修改，与常量有本质区别
//      // a = 20;

//     const int n = 10;
//     int arr[10] = {0};
//     printf("%d\n", a);
//     system("pause");
//     return 0;
// }

// 标识符常量
// #define MAX 100
// #define str "abcd"
// int main()
// {

//     printf("%d\n", MAX);
//     printf("%s\n", str);
//     system("pause");
//     return 0;
// }

//枚举常量，定义Color可能的取值
// enum Color
// {
//     RED,
//     GREEN,
//     BLUE
// };

// int main()
// {
//     enum Color c = RED;
//     printf("%d\n", c);
//     system("pause");
//     return 0;
// }

// C语言中有字符char类型，没有字符串类型。char包含'a'和"acs"
//字符串的末尾隐藏一个'\0' ，这是字符串结束的标志

// int main()
// {
//     char arr[] = "qwe r";
//     char a[] = {'w','e','r','\0'};
//     char arr2[] = {'q','w','e','r'};
//     // printf("%s\n", arr);
//     // printf("%s\n", a);
//     // printf("%s\n", arr2);
//     int len = strlen("abc");
//     // printf("%d\n", len);
//     printf("%s的长度是%d\n", arr, strlen(arr));
//     printf("%d\n", strlen(arr2));
//     system("pause");
//     return 0;
// }

int main()
{
    // printf("abc\0def\n");
    // printf("\abc\\adef\n");
    // printf("%c\n", '\130');
    printf("%c\n", '\177');
    system("pause");
    return 0;
}

// int main()
// {

// system("pause");
//     return 0;
// }
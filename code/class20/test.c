#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static修饰局部变量
// void test()
// {
//     static int a = 1;
//     a++;
//     printf("%d\n", a);
// }
// int main()
// {
//     int i = 0;
//     while(i<10)
//     {
//         test();
//         i++;
//     }
//     // printf("%d\n", a);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     extern int g_val;//不知道为什么err
//     // int g_val = 1;
//     printf("%d\n", g_val);
//     system("pause");
//     return 0;
// }

//register寄存器
// int main()
// {
//     register int num = 3;//建议3存放在寄存器中（最后由编译器决定）
//     system("pause");
//     return 0;
// }


// int main()
// {
//     system("pause");
//     return 0;
// }
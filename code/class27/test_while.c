#include <stdio.h>
#include <stdlib.h>

// while语句
// 打印1-10的数字
// break跳出整个循环;continue跳过本次循环continue后面的代码，直接向后判断循环条件
// int main()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         i++;
//         if (i == 5)
//             // break;
//             continue;
//         printf("%d ", i);
//     }

//     system("pause");
//     return 0;
// }

int main()
{
    // int c = getchar();
    // // EOF;//end of file
    // printf("%c\n",c);
    // putchar(c);

    // int ch = 0;
    // while((ch = getchar()) != EOF)
    // {
    //     putchar(ch);
    // }

    // 假设密码是一个字符串
    char password[20]={0};
    printf("请输入密码:>");
    scanf("%s", password);
    printf("请确认密码(Y/N):>");

    getchar();//读取\n

    int sure = getchar();
    if ('Y' == sure)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 电脑运行起来后，1分钟关机
// 如果输入：我是猪，就取消关机
int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60");
again:
    printf("请注意,你的电脑将在60s内关机,如果输入:我是猪,就取消关机");
    scanf("%s",input);
    if(strcmp(input, "我是猪")==0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int a = 0;
    while(scanf("%d", &a)) //scanf返回匹配成功的个数，此处成功则为1
    {
        if(3<a<10) //常见错误，此关系表达式恒为真，应写为3<a&&a<10
        {
            printf("a在3到10之间\n");
        }
        else
        {
            printf("a不在3到10之间\n");
        }

    }
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
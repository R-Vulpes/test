#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//     int i = 0;
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d\n", i);
//     }                           
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n",arr[10]);
//     system("pause");
//     return 0;
// }

// 模拟用户登录场景，只能登录三次（密码正确则登录成功，三次都输入失败则退出程序）
//比较两个字符串是否相等，不能用==，要用库函数strcmp;如果返回值为0，表示两个字符串相等
int main()
{
    int i = 0;
    char pass[10] = "12345678";
    char arr[10] = { 0 };
    printf("please input your password:");
    for(i ;i<3; i++)
    {
        scanf("%s", &arr);
        if (strcmp(arr,pass)==0) 
        {
            printf("welcome to bilibili!\n");
            break;
        }
        else
        {
            printf("password is fault,input again:");
        }
    }
    if(i==3)
    {
        printf("you have no chance.");
    }
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
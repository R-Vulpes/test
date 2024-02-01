#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
// int main()
// {
//     int i = 0;
//     char pass[10] = "12345678";
//     char arr[10] = { 0 };
//     printf("please input your password:");
//     for(i ;i<3; i++)
//     {
//         scanf("%s", &arr);
//         if (strcmp(arr,pass)==0) 
//         {
//             printf("welcome to bilibili!\n");
//             break;
//         }
//         else
//         {
//             printf("password is fault,input again:");
//         }
//     }
//     // 登录失败的情况：3次密码均输入错误
//     if(i==3)
//     {
//         printf("you have no chance.");
//     }
//     system("pause");
//     return 0;
// }


// 猜数字游戏：电脑产生一个随机数（1-100），猜数字，要反馈猜大了、猜小了，直到猜对结束
 void menu()
{
    printf("********************\n");
    printf("*******1.play*******\n");
    printf("*******0.exit*******\n");
    printf("********************\n");
}

 int game()
{
    printf("猜数字：");

    int random = rand()%100+1;//0~RAND_MAX(32767),%100后余数肯定在0~99，+1则到100
    int guess = 0;
    scanf("%d", &guess);
    while(guess != random)
    {
        if(guess < random)
        {
            printf("猜小了\n");
        }
        else if (guess > random)
        {
            printf("猜大了\n");
        }
        printf("请重猜:");
        scanf("%d", &guess);
    }
    printf("猜对了，这个数字是：%d\n", guess);
}

int main()
{   
    int choice = 0;
    //srand是使用rand()前调用的函数，设置起点，输入参数为正整数。只用在主函数调用一次
    //time()输入指针值，返回时间戳
    //unsigned int 定义无符号整数
    srand((unsigned int)time(NULL));
    do 
    {
        menu();
        printf("请选择：>");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新选择\n");
                break;
        }
    }while(choice);


    
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
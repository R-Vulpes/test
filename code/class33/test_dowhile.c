#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int i = 0;
//     do
//     {
//         i++;
//         printf("%d ", i);
//     } while (i < 10);

//     system("pause");
//     return 0;
// }

// 计算N的阶乘
// int main()
// {
//     int n = 0;
//     int y = 1;
//     scanf("%d", &n);
//     for (n; n > 0; n--)
//     {
//         y = y * n;
//     }
//     printf("n阶乘为%d\n", y);
//     system("pause");
//     return 0;
// }

// 计算1~10的阶乘的和
// int main()
// {
//     int i = 0;
//     int n = 0;
//     int add = 0;
//     int mul = 1;
//     // for (i = 1; i <= 10; i++)
//     // {
//     //     int mul = 1;
//     //     for (n = 1; n <= i; n++)
//     //     {
//     //         mul = mul*n;
//     //     }
//     //     add = add + mul;
//     // }
//     // 优化
//     for (n = 1; n <= 10; n++)
//     {
//         mul = mul*n;
//         add = add + mul;
//     }
//     printf("1~10的阶乘的和为%d\n", add);
//     system("pause");
//     return 0;
// }

// 二分查找有序数组中某个数字n
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 17;
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < sz; i++)
    {
        if(arr[i] == k)
        {
            printf("找到了，下标为%d\n", i);
            break;
        }
    }
    if(i == sz)
    {
        printf("没找到\n");
    }
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
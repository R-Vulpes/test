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
// 二分查找，数据必须有序
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 10;
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     // 遍历
//     // for(i = 0; i < sz; i++)
//     // {
//     //     if(arr[i] == k)
//     //     {
//     //         printf("找到了，下标为%d\n", i);
//     //         break;
//     //     }
//     // }
//     // if(i == sz)
//     // {
//     //     printf("没找到\n");
//     // }

//     int left = 0;
//     int right = sz - 1;
//     int mid = (right + left) / 2;
//     do
//     {
//         if (arr[mid] < k)
//         {
//             left = mid + 1;
//         }
//         else if(arr[mid] > k)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             printf("下标是%d\n", mid); 
//             break;
//         }
//          
//         mid = (right + left) / 2;
//         为了防止和数超过int可以表达的最大值，可以写:
//         mid = left + (right - left) / 2;
//     } while (left <= right);
    
//     if (left > right)
//     {
//         printf("找不到\n");
//     }
    
//     system("pause");
//     return 0;
// }


// 打印字符，从两端向中间显示
// #include <windows.h>
// int main()
// {
//     char arr1[]="welcome to bit!!!";
//     char arr2[]="#################";
//     int sz = strlen(arr2);
//     // 注意：sizeof算字符数组的大小，会包含'\0'
//     // int sz = sizeof(arr2) / sizeof(arr2[0])-1;
//     int left = 0;
//     int right = sz - 1;
//     while (left <= right)
//     {
//         arr2[left] = arr1[left]; 
//         arr2[right] = arr1[right]; 
//         printf("%s\n", arr2);
//         Sleep(1000);//停顿1000ms，即1s
//         system("cls");//system是一个库函数，可以执行系统命令，cls清除屏幕
//         left++;
//         right--;
//     }
//     printf("%s\n", arr2);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     system("pause");
//     return 0;
// }
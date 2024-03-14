#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数模拟字符数组的打印 
void print(char* a)
{
    int i = 0;
    while(a[i])
    {
        printf("%c", a[i]);
        i++;
    }
    printf("\n");
    printf("a=%d\n", sizeof(a)/sizeof(char)); //形参a传递的为数组首地址
} 

int main()
{
    char arr[6] = "Hello";
    // char arr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // printf("%s\n", arr);
    print(arr);
    // printf("arr=%d\n", sizeof(arr)/sizeof(char));
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
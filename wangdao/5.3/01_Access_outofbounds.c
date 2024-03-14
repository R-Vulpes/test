#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// 数组访问越界
int main()
{
    int arr[5] = {1,2,3,4,5};
    int j = 20;
    int i = 10;
    int n = 0;
    while(scanf("%d", &n))
    {
        printf("a[%d]=%d\n", n, arr[n]);
    }
    arr[5] = 10; //访问越界
    arr[6] = 15; //访问越界
    printf("i=%d\n", i);
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
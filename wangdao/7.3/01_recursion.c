#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 递归写阶乘 
int f(int n)
{
    // 一定要有结束条件，此处为最底层f(1)的返回值
    if(n == 1)
    {
        return 1;
    }
    return n * f(n-1);
} 

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("f(%d)=%d\n", n, f(n));
    
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
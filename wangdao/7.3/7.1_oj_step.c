#include <stdio.h>
#include <stdlib.h>

int step(int n)
{   
    // 结束判断:当台阶为1个或2个时结束递归
    // if (n == 2)
    // {
    //     return 2;
    // }
    // else if(n == 1)
    // {
    //     return 1;
    // }
    if(1==n || 2==n)
    {
        return n;
    }
    //step(n)为走到第n阶包含的情况
    // 关键是找到这个公式 step(n)=step(n-1)+step(n-2)
    return step(n - 1) + step(n - 2);
}

int main()
{
    int i = 0;
    scanf("%d", &i);
    printf("%d\n", step(i));
    system("pause");
    return 0;
}
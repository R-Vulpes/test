#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int y = 0;
    while(scanf("%d", &y))
    {
        if(0==y%4 && 0!=y%100 || 0==y%400) 
        {
            printf("is leap year\n");
        }
        else
        {
            printf("is not leap year\n");
        }

    }

    int i,j = 6;
    i = !!j; //逻辑非是单步操作符，自右至左结合
    printf("i=%d\n", i);
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
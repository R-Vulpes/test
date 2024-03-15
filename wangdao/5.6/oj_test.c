#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 5.1_循环打印
//  int main()
//  {
//      int a[100] = {0};
//      int n = 0;
//      int i = 0;
//      int t = 0;
//      scanf("%d", &n);
//      for (i; i < n; i++)
//      {
//          scanf("%d", &a[i]); //循环读取
//          if (a[i] == 2)
//          {
//              t++;
//          }
//      }
//      printf("%d\n", t);

//     system("pause");
//     return 0;
// }

// 5.2_字符串反转，比较两个字符串
int main()
{
    int len = 0;
    int i = 0;
    char a[100] = {0};
    char b[100] = {0}; //此处初始化可以让b有结束符，因此后续不用额外考虑给b加结束符

    gets(a);
    len = strlen(a);
    while (a[i])
    {
        b[len - 1 - i] = a[i];
        i++;
    }
    // puts(b);
    int re = strcmp(a, b);
    if (re == 0)
    {
        printf("%d\n", 0); //printf打印可以直接写常量
    }
    else if (re < 0)
    {
        printf("%d\n", -1);
    }
    else if (re > 0)
    {
        printf("%d\n", 1);
    }
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
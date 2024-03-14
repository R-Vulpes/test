#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 题4.1 
// int main()
// {
//     int num,i= 0;
//     scanf("%d", &num);
//     int num2 = num; //这步别忘了
//     while(num)
//     {
//         i = 10*i+num%10;
//         num = num/10;
//     }
//     if(i == num2)
//     {
//         printf("yes\n");
//     }
//     else
//         printf("no\n");
    
//     system("pause");
//     return 0;
// }

// 题4.2
// int main()
// {
//   int i=1,j=1;
//   scanf("%d", &j);
//   for(j; j>1; j--)
//   {
//     i=i*j;
//   }
//   printf("%d\n", i);
//   system("pause");
//   return 0;
// }
 
// 题4.3
int main()
{
    int num = 0;
    int i,j,k,n = 1;
  //边界控制不严谨，容易遗漏
//   for(i=1; i<100/10; i++)
//   {
//     for(j=1; j<(100-10*i)/5; j++)
//     {
//         for(k=1; k<(100-10*i-5*j)/2; k++)
//         {
//             n=100-10*i-5*j-2*k;
//             if(40 == i+j+k+n)
//                 {
//                     num+=1;
//                 }
//         }
//     }
//   }

    // 正解：
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=20; j++)
        {
            for(k=1; k<=37; k++)
            {
                for(n=1; n<=37; n++)
                {
                    if(i+j+k+n==40 && 10*i+5*j+2*k+n==100)
                    {
                        num += 1;
                    }
                }
            }
        }
    }
    printf("%d\n", num);
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

 void change(int j)
 {
    j = 5;
 }

int main()
{
    int i = 10;
    change(i); //c语言的函数调用是值传递，实参赋值给形参，j=i
    printf("%d\n", i); //i的值不会改变
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
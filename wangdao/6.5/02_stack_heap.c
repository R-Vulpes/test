#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char* print_stack()
{
    char c[100] = "hello world 12i1o2y5";
    puts(c);
    return c;
}

char* print_malloc()
{
    char* c = (char*)malloc(100);
    strcpy(c,"hello world");
    puts(c);
    return c;
}

int main()
{
    char *p;
    p = print_stack();
    puts(p); //栈空间释放后可能打印错误
    p = print_malloc();
    puts(p); 
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
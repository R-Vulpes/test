#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef的使用
typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu, *pstu; 
// stu 等价于 struct student; pstu 等价于 struct student*

int main()
{
    typedef int INGETER;
    INGETER i = 10;
    stu s ={0};
    pstu p = &s;
    p->num = i;
    printf("i=%d\n", p->num);
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
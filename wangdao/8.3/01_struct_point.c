#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student //struct student 就是类型，后面声明时都要加上，类似于int/char
{
    int num;
    char name[20];
    char sex;
};

int main()
{
    struct student s ={110, "harry", 'M'};
    struct student sarr[3] = {123, "jack", 'F',130, "marry", 'M',144, "esablla", 'F'};
    struct student *p;
    p = &s;
    printf("p:%d %s %c\n", p->num, p->name, p->sex); 
    printf("p:%d %s %c\n", (*p).num, (*p).name, (*p).sex); //不能直接*p.成员,点（成员选择）运算符优先级高于星号，得加括号
    p = sarr; //等价于 p=sarr[0]
    printf("sarr[1]:%d %s %c\n", (p+1)->num, (p+1)->name, (p+1)->sex);
    // printf("sarr:%d %s %c\n", sarr[0].num, sarr[1].name, sarr[2].sex);

    // 下面用malloc为结构体申请空间，并对成员赋值打印
    p = (struct student*)malloc(sizeof(struct student));
    p->num = 12;
    strcpy(p->name,"ella");
    p->sex = 'F';
    printf("p_malloc:%d %s %c\n", p->num, p->name, p->sex);

    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
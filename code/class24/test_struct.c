#include <stdio.h>
#include <stdlib.h>
//结构体struct，是把一些单一类型组合在一起

//学生
struct Stu
{
    //结构体的成员
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};

// 创建print函数打印结构体
void print(struct Stu *p)
{
    // 注意：（*p）括号不能丢
    printf("%s %d %s %s\n", (*p).name, (*p).age, (*p).sex, (*p).tele);
    // 结构体指针变量->成员名
    printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tele);
}

int main()
{
    struct Stu s = {"zhangsan", 10, "nan", "12345678901"};
    // 结构体对象.成员名
    // printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
    print(&s);
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
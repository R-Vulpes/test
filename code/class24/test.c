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

int main()
{
    struct Stu s = {"zhangsan", 10, "nan", "12345678901"};
    printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
    system("pause");
    return 0;
}

// int main()
// {
//     system("pause");
//     return 0;
// }
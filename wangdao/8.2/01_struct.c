#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义结构体一般放在主函数外面，也可放在里面不过不符合一般的代码规范
struct student{
    int num; //4B
    char name[20]; //5*4B
    char sex; //4B
    int age; //4B
    float score; //4B
    char addr[30]; //8*4B
}; // 结构体类型声明一定要加分号

int main()
{
    //声明的变量名不能和结构名一致,括号内顺序不能变
    struct student std1 = {100, "betty", 'g', 12, 88.5, "sreethandway200"};
    printf("%d\n", sizeof(std1));
    // 结构体访问必须单独访问内部每个成员
    printf("%d %s %c %d %.2f %s\n", std1.num, std1.name, std1.sex, std1.age, std1.score, std1.addr);

    // scanf("%d%s %c%d%f%s", &std1.num, std1.name, &std1.sex, &std1.age, &std1.score, &std1.addr); //scanf内没有格式控制，不要写成 %.2f
    // printf("%d %s %c %d %.2f %s\n", std1.num, std1.name, std1.sex, std1.age, std1.score, std1.addr);

    // 输入并打印结构体数组
    // 99 happy g 13 34.5 add1
    // 98 enjoy b 14 55.5 add2
    // 97 pleasant b 15 97.5 add3
    struct student sa[3];
    int i = 0;
    for(i; i<3; i++)
    {
        scanf("%d%s %c%d%f%s", &sa[i].num, sa[i].name, &sa[i].sex, &sa[i].age, &sa[i].score, &sa[i].addr);
    }
    // printf("i=%d\n", i); //此处i=3
    for(i=0; i<3; i++)
    {
        printf("%d %s %c %d %.2f %s\n", sa[i].num, sa[i].name, sa[i].sex, sa[i].age, sa[i].score, sa[i].addr);
    }

    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
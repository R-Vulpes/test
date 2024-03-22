#include <stdio.h>
#include <stdlib.h>

void modify_pointer(int *p, int *q)
{
    p = q;
}

int main()
{
    int *p = NULL;
    int i = 10;
    int *q = &i;
    modify_pointer(p,q);
    printf("*p=%d", *p);
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// void print(int* a)
// {
//     int i = 0;
//     for(i; i<sizeof(a)/sizeof(int); i++)
//     {
//        printf("%d ", a[i]);
//        printf("\n");

//     }
// }
void print(int* a, int length)
{
    int i = 0;
    for(i; i<length; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    print(arr, 5);
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
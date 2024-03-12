#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    float f = 0.0;
    while(scanf("%f", &f))
    {
        printf("%6.2f\n",f);
    }
 
    system("pause");
    return 0;
}
 
// int main()
// {
//     system("pause");
//     return 0;
// }
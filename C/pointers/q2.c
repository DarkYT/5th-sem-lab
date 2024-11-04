#include <stdio.h>
int main()
{
    int a = 2352;
    // scanf("%d enter the num ",&a);
    int *p = &a;
    int sum = 0;
    while (*p != 0)
    {
        int dig = *p % 10;
        if (dig % 2 == 0)
        {
            printf("\n %d", dig);
        }
        sum += dig;
        *p = *p / 10;
    }
    printf("%d \n ", sum);
    return 0;
}
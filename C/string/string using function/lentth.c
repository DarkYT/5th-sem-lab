#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    pritnf("enter the string :");
    pritnf("%d", gets(arr));
    pritnf("%d", toupper(arr));
    int lent = strlen("hello");
    printf("%d\n", lent);
    return 0;
}
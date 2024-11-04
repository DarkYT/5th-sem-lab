#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    int count = 0;
    printf("\n Enter a string 1 :");
    gets(arr);
    int len = 0;
    int len1 = strlen(arr);
    char a[len1];
     for (int i = 0; i < len1; i++)
    {
         a[i]=arr[i];
    }
    printf("\n your string is %s",a);
    return 0;

    }

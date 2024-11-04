#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    int count = 0;
    printf("\n Enter a string :");
    gets(arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    char a[count];
    int len = count;
    for (int i = count; i != 0; i--)
    {
        printf("%c", arr[i - 1]);
        a[len - i] = arr[i - 1];
    }
    printf("\n new reversed string is :");
    for (int i = 0; i < count; i++)
    {
        printf("%c", a[i]);
    }
    int len1 = strlen(arr);
    int len2 = strlen(a);
    int co =0;
    for (int i = 0; i < len1; i++)
    {
        if ((arr[i] != a[i]))
        {
            co++;
            break;
        }
        else
        {
            continue;
        }
    }

    if (co == 0)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("not ");
    }
    //  printf("\nso the length is %d ",count);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    int count = 0;
    printf("\n Enter a string 1 :");
    gets(arr);
    char a[20];
    int len = 0;
    printf("\n Enter a string 2 :");
    gets(a);
    int len1 = strlen(arr);
    int len2 = strlen(a);

    // for (int i = 0;i<len1; i++)
    // {
    //     if (arr[i] == ' ')
    //     {
    //         printf(" ");
    //         continue;
    //     }
    //     else if ()
    //     {
    //         arr[i] = arr[i] - 32;
    //         printf("%c", arr[i]);
    //     }
    // }

    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //     {
    //         printf(" ");
    //         continue;
    //     }
    //     else if (a[i] < 97)
    //     {
    //         a[i] = a[i] - 32;
    //         printf("%c", a[i]);
    //     }
    // }
    int co = 0;
    if (len1 != len2)
    {
        printf("\n both string are different. ");
    }
    else
    {

        for (int i = 0; i<len1; i++)
        {
            if((arr[i] != a[i]))
            {
                co++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (co == 0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}
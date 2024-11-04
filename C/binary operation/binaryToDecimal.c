#include <stdio.h>

#define MAX 15

int STACK[MAX];
int top = -1;

void doPush(int value)
{
    if (top < MAX - 1)
    {
        STACK[++top] = value;
    }
    else
    {
        printf("Stack Overflow\n");
    }
}

int doPop()
{
    if (top >= 0)
    {
        return STACK[top--];
    }
    else
    {
        printf("Stack Underflow\n");
        return -1;
    }
}

void Dectohex(int decimal)
{
    int temp = decimal;
    int rem;

    while (temp != 0)
    {
        rem = temp % 16;
        
            doPush(rem);
        temp = temp / 16;
    }

    printf("Hexadecimal: ");
    while (top != -1)
    {
        int d = doPop();
        if (d >= 0)
        {
            if (d < 10)
            {
                printf("%d", d);
            }
            else
            {
                printf("%c", d - 10 + 'A');
            }
        }
    }
    printf("\n");
}

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    Dectohex(decimal);

    return 0;
}
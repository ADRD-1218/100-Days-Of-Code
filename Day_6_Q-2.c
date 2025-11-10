#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a >= 0)
    {
        if (a == 0)
        {
            printf("The number is Zero\n");
        }
        else
        {
            printf("The number is Positive\n");
        }
    }
    else
    {
        printf("The number is Negative\n");
    }

    return 0;
}

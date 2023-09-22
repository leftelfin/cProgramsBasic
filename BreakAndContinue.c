#include <stdio.h>

int main()
{
    int i;
    printf("Loop including break statement : \n");
    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
    }

    int j;
    printf("Loop including continue statement : \n");
    for (j = 0; j < 10; j++)
    {
        if (j == 4)
        {
            continue;
        }
        printf("%d\n", j);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int i = 6;
    while (i != 0)
    {
        printf("%d\n", i);
        i--;
    }
    //* while loops executes a code block until the statement is true

    int j = 10;
    do
    {
        printf("%d\n", j);
        j--;
    } while (j != 0);
    // * while loop iterates through the loop even if the condition is not true

    return 0;
}
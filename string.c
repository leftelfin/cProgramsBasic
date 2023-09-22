#include <stdio.h>

int main()
{
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);

    greetings[0] = 'J';
    printf("%s\n", greetings);
    // Outputs Jello World! instead of Hello World!
    return 0;
}
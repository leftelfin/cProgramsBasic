#include <stdio.h>

int main()
{
    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0)
    {
        printf("The value is a positive number.\n");
    }
    else if (myNum < 0)
    {
        printf("The value is a negative number.\n");
    }
    else
    {
        printf("The value is 0.\n");
    }

    //? Shorthand Style
    //* variable = (condition) ? expressionTrue : expressionFalse;
    int age = 20;
    (age < 18) ? printf("You can not drive.\n") : printf("You can Drive.\n");

    return 0;
}
#include <stdio.h>

float c2f(float c)
{
    return (c * 9 / 5) + 32;
}

float f2c(float f)
{
    return (f - 32) * 5 / 9;
}

int main()
{
    char x;
    float tmp;
    printf("Enter 'c' for celsius & 'f' for fahrenheit : ");
    scanf("%c", &x);
    printf("Enter the temperature value : ");
    scanf("%f", &tmp);

    if (x == 'c')
    {
        printf("The value in Fahrenheit : %.2f", c2f(tmp));
    }
    else if (x == 'f')
    {
        printf("The value in Celsius : %.2f", f2c(tmp));
    }
    else
    {
        printf("Input Error.\n");
    }
    return 0;
}
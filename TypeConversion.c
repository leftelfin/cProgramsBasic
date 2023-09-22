#include <stdio.h>

int main()
{
    float tum = 5 / 2;
    printf("%f\n", tum); // 2.000000
                         //! without typecasting the answer will be wrong

    int num1 = 5;
    int num2 = 2;
    float sum = (float)num1 / num2;

    printf("%f", sum); // 2.500000
                       //* The answer is correct as we typecasted num1 as a float
    return 0;
}
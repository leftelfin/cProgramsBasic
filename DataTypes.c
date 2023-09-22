/*
* int => Stores whole numbers, without decimals {size : 2/4 bytes} [identifier : %d, %i]

* float => Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits {size : 4 bytes} [identifier : %f]

* double => Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits {size : 8 bytes} [identifier : %lf]

* char => Stores a single character/letter/number, or ASCII values {size : 1 byte} [identifier : %c]
*/

#include <stdio.h>

int main()
{
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits
    return 0;
}
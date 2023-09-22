/*
    Armstrong Number is a number that is equals to the sum of the digits to the power no. of digits.
*/

#include <stdio.h>
#include <math.h>

int noOfDigits(int x)
{
    int p = 0;
    while (x)
    {
        p++;
        x /= 10;
    }
    return p;
}

int IsArmstrong(int x)
{
    int n = noOfDigits(x);
    int temp = x, total = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        total += pow(rem, n);
        temp /= 10;
    }

    if (total == x)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    (IsArmstrong(num) == 1)
        ? printf("%d is an Armstrong Number.\n", num)
        : printf("%d is Not an Armstrong Number\n", num);

    return 0;
}
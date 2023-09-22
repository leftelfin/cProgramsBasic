#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun); // Returns 1 (true)
    printf("%d\n", isFishTasty);      // Returns 0 (false)

    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        printf("Old enough to vote!");
    }
    else
    {
        printf("Not old enough to vote.");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, count = 0;

    //? Generates random number form 1 and 100
    srand(time(NULL));
    num = rand() % 100 + 1;
    // printf("%d\n", num);
    if (count <= 10)
    {
        while (guess != num)
        {
            printf("Enter a Guess : ");
            scanf("%d", &guess);
            if (guess < num)
                printf("Higher Number Please.\n");
            else if (guess > num)
                printf("Lower Number Please.\n");
            else
                printf("The correct number is %d.\n", num);
            count += 1;
        }
        printf("You have guessed the correct number in %d tries.\n", count);
    else
    {
        printf("The correct number is %d.\n", num);
        printf("You can not guess the number in 10 attempts.\n");
    }
    return 0;
}
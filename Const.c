#include <stdio.h>

int main()
{
    const int AgeLimit = 60;
    //* This value can never be changed later
    printf("%i\n", AgeLimit);

    // const int MinAge;
    // MinAge = 18;
    //! this Will show warning as Const values can not be defined later.

    return 0;
}
#include <stdio.h>

int main()
{
    int MyArray[] = {45, 65, 42, 23};
    printf("%d\n", MyArray[0]);
    //* this is a predefined array

    MyArray[0] = 33;
    printf("%d\n", MyArray[0]);
    //? predefined array values can be changed

    int myNumbers[4];
    //*This is an array defined with just the size defined
    //?Here values are defined after
    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;
    return 0;
}
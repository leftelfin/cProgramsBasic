/*
? Operators in C :-
!    1.Arithmatic Operators
        "+" addition
        "-" substraction
        "*" multiplication
        "/" division
        "%" modulus
        "++" increment
        "--" decrement
!    2.Assignment/Shorthand Operators
        "=" x=5
        "+=" x=x+5
        "-=" x=x-5
        "*=" x=x*5
        "/=" x=x/5
        "%=" x=x%5
        "&=" x=x&5
        "|=" x=x|5
        "^=" x=x^5
        ">>=" x=x>>5
        "<<=" x=x<<5
!    3.Comparison Operator
        "==" Equals to
        "!=" Not Equals to
        ">" Greater than
        "<" Less than
        ">=" Greater than equals to
        "<=" Less than equals to
!    4.Logical Operator
        "&&" AND
        "||" OR
        "!" NOT


*/

#include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("sizeof int : %lu\n", sizeof(myInt));
    printf("sizeof float : %lu\n", sizeof(myFloat));
    printf("sizeof double : %lu\n", sizeof(myDouble));
    printf("sizeof char : %lu\n", sizeof(myChar));
    return 0;
}
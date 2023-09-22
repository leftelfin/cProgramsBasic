#include <stdio.h>

int main()
{
    int a = 10;

    int *p1;
    p1 = &a;

    int **p2;
    p2 = &p1;

    int ***p3;
    p3 = &p2;

    printf("Value of a: %d\n", a);
    printf("Address of a: %u\n\n", &a); // variable


    printf("Value of a by derefferencing p1 : %d\n",*p1);
    printf("Value of p1: %u\n", p1);
    printf("Address of p1: %d\n\n", &p1); // pointer to variable


    printf("Value of a by derefferencing p2 : %d\n",**p2);
    printf("Value of p2: %u\n", p2);
    printf("Address of P2: %u\n\n", &p2); // pointer to pointer to variable


    printf("Value of a by derefferencing p3 : %d\n",***p3);
    printf("Value of p3: %u\n", p3);
    printf("Address of P3: %u\n\n", &p3); // pointer to pointer to pointer to variable

    return 0;
}
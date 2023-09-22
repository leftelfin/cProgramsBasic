#include <stdio.h>
int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
// in this function the A[] copies only the address of the first element in the array and traverses through the whole array so if the size calculation part is moved into the function the size of A[] will be only 4 as for being a integer pointer.
int main()
{
    int A[] = {2, 5, 8, 1, 6};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumOfElements(A, size);

    printf("Total : %d\n", total);
    return 0;
}
#include <stdio.h>

int main()
{
    //* Main array definition stage
    int a, b, c;
    printf("Enter the size of 1st dim : ");
    scanf("%d", &a);
    printf("Enter the size of 2nd dim : ");
    scanf("%d", &b);
    printf("Enter the size of 3rd dim : ");
    scanf("%d", &c);
    int arr[a][b][c];

    //? Array value input stage
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("Enter the value of arr[%d][%d][%d] : ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    //? Array display stage
    for (int l = 0; l < a; l++)
    {
        for (int m = 0; m < b; m++)
        {
            for (int n = 0; n < c; n++)
            {
                printf("%d, ", arr[l][m][n]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
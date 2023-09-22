#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *p = (char *)malloc(1024); // allocated some memory for the pointer
    if (p != NULL)
    {
        p[0] = 'A';
        p[1] = 'B';
        p[2] = 'C';
        p[3] = 'D';
        p[2] = 'D';
        p[4] = 0;

        printf("Buffer : %s\n", p);
        free(p); // freed the memory
    }

    return 0;
}
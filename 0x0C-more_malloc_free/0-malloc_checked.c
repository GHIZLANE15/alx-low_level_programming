#include "main.h"

/**
 * *malloc_checked -allocates memory using malloc and exit if faild
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
        int *l == malloc(b);

        if (l == 0)
                exit(98);

        return (l);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long long int a = 1, b = 2, next;
    int count;

    printf("%llu, %llu", a, b);

    for (count = 3; count <= 98; count++)
    {
        next = a + b;
        printf(", %llu", next);
        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}

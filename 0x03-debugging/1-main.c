#include <stdio.h>

int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        putchar('0' + i); // Print the character representation of the number
        i++;
    }

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}


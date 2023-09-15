#include "main.h"

int main(void) {
    unsigned long number = 612852475143;
    unsigned long largest = largest_prime_factor(number);
    printf("The largest prime factor of %lu is: %lu\n", number, largest);
    return 0;
}


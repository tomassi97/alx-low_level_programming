#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; // Don't print anything if n is out of range.
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int result = i * j;

            // Format the output to align the numbers properly.
            if (j == 0) {
                printf("%d", result);
            } else {
                printf(",%4d", result); // Adjust the width as needed.
            }
        }
        printf("\n");
    }
}

int main(void) {
    print_times_table(3);
    printf("\n");
    print_times_table(5);
    printf("\n");
    print_times_table(98); // Out of range, won't print anything.
    printf("\n");
    print_times_table(12);
    return 0;
}

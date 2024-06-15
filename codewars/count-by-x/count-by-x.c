#include <stdio.h>
#include <stdlib.h>

unsigned* count_by(unsigned x, unsigned n) {
    unsigned* numbers = malloc(n * sizeof(unsigned));

    for (unsigned i = 1; i <= n; i++) {
        numbers[i - 1] = i * x;
    }

    return numbers;
}

int main() {
    unsigned* result = count_by(2, 5);
    printf("res: %u", result[0]);
}

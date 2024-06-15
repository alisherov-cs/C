#include <stdlib.h>
#include <stddef.h>
#include <inttypes.h>
#include <stdio.h>

void digitize(int n) {
    char *str;
    asprintf(&str, "%d", n);
    
    int length;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    int result[50];
    for (int i = length; i >= 0; i--) {
        result[length - 1 - i] = str[i];
    }

    printf("res: %d", result[0]);
    free(str);
}

int main() {
    digitize(123);
}

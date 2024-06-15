#include <stdio.h>

char *number_to_string(int number) {
    char *result;
    asprintf(&result, "%d", number);
    return result;
}

int main() {
    printf("res: %s", number_to_string(12));
}

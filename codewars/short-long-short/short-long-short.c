#include <stdio.h>
#include <string.h>

char *shortLongShort(char *a, char *b) {
    char *res;

    char *shortValue = strlen(a) > strlen(b) ? b : a;
    char *longValue = strlen(a) > strlen(b) ? a : b;

    asprintf(&res, "%s%s%s", shortValue, longValue, shortValue);

    return res;
}

int main() {
    char *res = shortLongShort("1", "22");
    printf("res: %s", res);
}

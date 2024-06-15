#include <stdio.h>

void increment(int * n) {
    (*n)++;
}

int main() {
    int n = 1;
    printf("before x: %d", n);
    increment(&n);
    printf("after x: %d", n);

    char name[] = "John";
    char *pointer = &name[0];
    printf("name is: %s", pointer);
}

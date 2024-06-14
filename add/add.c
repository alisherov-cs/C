#include <ctype.h>
#include <stdio.h>

int main() {
    char xChar, yChar;
    int x, y;

    int triedX = 0;
    int triedY = 0;

    while (!isdigit(xChar)) {
        if (triedX == 1) {
            printf("Invalid value please try again x: ");
        } else {
            printf("Enter x: ");
        }
        xChar = getchar();
        getchar();
        triedX = 1;
    }

    while (!isdigit(yChar)) {
        if (triedY == 1) {
            printf("Invalid value please try again y: ");
        } else {
            printf("Enter y: ");
        }
        yChar = getchar();
        getchar();
        triedY = 1;
    }

    x = xChar - '0';
    y = yChar - '0';

    printf("result: %d", x + y);
}

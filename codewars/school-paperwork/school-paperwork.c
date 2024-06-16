#include <stdio.h>

int paperwork(int n, int m) {
    if (n <= 0 || m <= 0) {
        return 0;
    }
    return n * m;
}

int main() {
    int res = paperwork(5, 5);
    printf("res: %d", res);
}

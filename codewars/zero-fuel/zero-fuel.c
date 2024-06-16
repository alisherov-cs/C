#include <stdbool.h>
#include <stdio.h>

bool zeroFuel(double distanceToPump, double mpg, double fuelLeft) {
    return distanceToPump <= mpg * fuelLeft;
}

int main() {
    bool res = zeroFuel(50, 25, 2);
    printf("res: %b", res);
}

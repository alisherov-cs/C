#include <stdio.h>

typedef float (*Add)(float, float);
typedef float (*Sub)(float, float);
typedef float (*Div)(float, float);
typedef float (*Mlt)(float, float);

typedef struct {
    Add add;
    Sub sub;
    Div div;
    Mlt mlt;
} Operations;

float includes(char operations[4], char operation) {
    for (int i = 0; i < 4; i++) {
        if (operations[i] == operation) {
            return 1;
        }
    }
    return 0;
}

float add(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float div(float x, float y) {
    return x / y;
}

float mlt(float x, float y) {
    return x * y;
}

float calculate(float x, float y, char operation) {
    Operations functions = { add, sub, div, mlt };

    switch (operation) {
        case '+':
           return functions.add(x, y);
        case '-':
           return functions.sub(x, y);
        case '*':
           return functions.mlt(x, y);
        case '/':
           return functions.div(x, y);
        default:
           return functions.add(x, y);
    }
}

int main() {
    float x, y;
    char operation;
    char operations[] = {'+', '-', '*', '/'};

    printf("Enter number x: ");
    scanf("%f", &x);

    printf("Enter number y: ");
    scanf("%f", &y);

    while (!includes(operations, operation)) {
        printf("Enter the operation (+, -, *, /): ");
        scanf("%s", &operation);
    }

    float res = calculate(x, y, operation);
    printf("result: %.1f", res);
}

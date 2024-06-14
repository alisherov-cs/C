#include <stdio.h>

typedef void (*Withdraw)();
typedef float (*BalanceGet)();

typedef struct {
   BalanceGet get; 
} Balance;

typedef struct {
    Balance balance;
    Withdraw withdraw;
} ATM;

float balance = 1200;

float getBalance() {
    return balance; 
}

void setBalance(float amount) {
    balance = amount; 
}

float calculatePercent(float balance, int percent) {
    if (percent > 100) {
        return -1;
    }
    return balance + balance / 100 * percent;
}

void withdraw() {
    float amount;

    printf("Enter the amount you want to draw: ");
    scanf("%f", &amount);

    float balance = getBalance();
    float amountWithPercent = calculatePercent(amount, 1);

    if (amountWithPercent != -1 && amountWithPercent + amount <= balance) {
        setBalance(balance - amountWithPercent);
    }

    printf("Success!\n");
    printf("Percent: 1%%\n");
    printf("Drawed: %.3f$\n", amountWithPercent);
    printf("Your balance: %.3f$\n", getBalance());
}

void operate(ATM atm, char operation) {
    switch (operation) {
        case 'b':
            printf("Your balance: %.3f$", atm.balance.get());
            break;
        case 'w':
            withdraw();
            break;
    }
}

int main() {
   ATM atm = { .balance = { getBalance }, withdraw }; 
   char operation;
    
   printf("b -> balance\n");
   printf("w -> withdraw\n");
   printf("Welcome! choose operation: ");
   scanf("%c", &operation);

   operate(atm, operation);
}

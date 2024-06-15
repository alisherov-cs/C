#include <stdio.h>

typedef void (*Run)();

typedef struct {
    char *city;
} Address;

typedef struct {
    char *name;
    int age;
    Run run;
    Address address;
} Person;

void run() {
    printf("Running");
}

int main() {
    Person user = { "John", 21, run, .address = { "New York" } };

    printf("name: %s\n", user.name);
    printf("age: %d\n", user.age);
    printf("address: %s\n", user.address.city);
    user.run();
}

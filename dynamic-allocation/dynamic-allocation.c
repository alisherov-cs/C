#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
} Person;

int main() {
    Person *person = (Person*) malloc(sizeof(Person));

    person -> name = "John";
    person -> age = 21;

    printf("name: %s", (*person).name);
    printf("name: %s", person -> name);

    printf("age: %d", (*person).age);
    printf("age: %d", person -> age);

    free(person);
}

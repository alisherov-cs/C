#include <stdio.h>
#include <stdbool.h>

const char *bool_to_word(bool value) {
  if (value) return "Yes";
  return "No";
}

int main() {
   printf("res: %s", bool_to_word(true)); 
}

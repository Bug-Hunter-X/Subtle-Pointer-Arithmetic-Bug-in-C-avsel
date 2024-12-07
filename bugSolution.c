#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Check if the pointer is valid before dereferencing
  if (ptr != NULL) {
    *ptr = 20;
    printf("%d\n", x);
  } else {
    fprintf(stderr, "Error: Null pointer detected.\n");
    return 1; // Indicate an error
  }

  return 0;
}

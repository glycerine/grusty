#include <stdio.h>
#include "../the_rust_part/src/lib.h" // Include our header file
int main() {
  int32_t a = 10;
  int32_t b = 20;

  // Call the 'add' function from our Rust library
  int32_t result = add(a, b);

  printf("The sum of %d and %d is: %d\n", a, b, result);

  return 0;
}

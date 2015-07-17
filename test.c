#include <stdlib.h>
#include <stdio.h>

int main() {
  srand(1);
  int x = rand();
  srand(2);
  int y = rand();

  puts(x == y ? "ok" : "fail");
  return !(x == y);
}

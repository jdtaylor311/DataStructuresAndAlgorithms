#include <iostream>

using namespace std;

struct Rectangle {
  int width;
  int breadth;
  char x;  // looks like it will only take 1 byte but will actually use 4
           // because its easier for the computer to save 4 bytes
           // known as padding bytes
           // will later discard 3 bytes
};

int main() {
  struct Rectangle r;
  r.width = 5;
  r.breadth = 10;

  struct Rectangle r2 = {10, 30};
  struct Rectangle r3, r4, r5;

  printf("size of rectangle struct: %lu", sizeof(r));

  return 0;
}
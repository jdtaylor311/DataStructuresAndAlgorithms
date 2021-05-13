#include <iostream>

using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

int area(struct Rectangle r) { return r.length * r.breadth; }
void addToLength(struct Rectangle &r1, int toAdd) {
  r1.length = r1.length + toAdd;
}

int main() {
  struct Rectangle r = {24, 32};

  int totalArea = area(r);
  printf("The total area is %d", totalArea);

  addToLength(r, 5);
  totalArea = area(r);
  printf("The new total area is %d", totalArea);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include <iostream>

using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

void addToLength(struct Rectangle *r, int toAdd) {
  r->length = r->length + toAdd;
}

int area(struct Rectangle *r) { return r->length * r->breadth; }

int main() {
  struct Rectangle r = {10, 38};
  int totalArea = area(&r);

  printf("The total area is %d\n", totalArea);

  addToLength(&r, 8);
  totalArea = area(&r);
  printf("The total area is %d", totalArea);

  return 0;
}
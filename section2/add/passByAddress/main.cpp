#include <iostream>

using namespace std;

int add(int *x, int *y) { return *x + *y; }

int main() {
  int a = 79;
  int b = 87;

  int sum;
  sum = add(&a, &b);
}
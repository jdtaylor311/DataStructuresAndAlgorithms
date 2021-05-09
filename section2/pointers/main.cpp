#include <iostream>

using namespace std;

int main() {
  int a = 10;

  int *p = &a;

  printf("%d\n", *p);

  int *p2 = p;
  *p2 = 25;

  return 0;
}
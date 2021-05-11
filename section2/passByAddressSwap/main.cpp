#include <iostream>

using namespace std;

int swap(int* x, int* y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  return 0;
}

int main() {
  int a = 1;
  int b = 2;

  swap(&a, &b);

  cout << a << endl;
  cout << b << endl;
}
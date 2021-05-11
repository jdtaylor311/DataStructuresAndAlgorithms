#include <iostream>

using namespace std;

void swap(int &x, int &y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main() {
  int a = 25;
  int b = 34;

  swap(a, b);

  cout << a << endl;
  cout << b << endl;
}
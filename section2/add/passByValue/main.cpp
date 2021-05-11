#include <iostream>

using namespace std;

int add(int x, int y) { return x + y; }

int main() {
  int a = 16;
  int b = 139;

  int sum = add(a, b);

  cout << sum << endl;
}
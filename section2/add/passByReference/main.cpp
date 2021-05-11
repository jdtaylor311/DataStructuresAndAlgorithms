#include <iostream>

using namespace std;

int add(int &x, int &y) { return x + y; }

int main() {
  int a = 134;
  int b = 348;

  int sum;

  sum = add(a, b);
  cout << sum << endl;
}
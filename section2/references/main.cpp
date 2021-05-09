#include <iostream>

using namespace std;

int main() {
  int a = 10;

  int &r = a;

  cout << r << endl;
  cout << a << endl;

  r++;

  cout << r << endl;
  cout << a << endl;

  a -= 15;

  cout << r << endl;
  cout << a << endl;
}
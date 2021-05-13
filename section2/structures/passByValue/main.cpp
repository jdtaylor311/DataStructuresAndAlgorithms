#include <iostream>

using namespace std;

struct Rectangle {
  int length;
  int breadth;
};
int area(struct Rectangle r) { return (r.length * r.breadth); }

int main() {
  struct Rectangle r = {10, 15};

  int result = area(r);

  cout << area(r) << endl;
  return 0;
}

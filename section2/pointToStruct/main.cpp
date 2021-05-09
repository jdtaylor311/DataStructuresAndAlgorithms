#include <iostream>

using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

int main() {
  struct Rectangle r = {10, 5};

  cout << r.length << endl;
  cout << r.breadth << endl;

  struct Rectangle *p = &r;
  (*p).breadth = 15;  // C++ Syntax
  p->length = 20;     // C syntax

  cout << p->length << endl;
  cout << p->breadth << endl;
  cout << r.length << endl;
  cout << r.breadth << endl;

  //--------- Pointer to a structure in heap memory ----------

  Rectangle *p2;
  p2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));

  p2->length = 15;
  p2->breadth = 35;

  cout << &p2->length << endl;
  cout << &p2->breadth << endl;
}
#include <stdio.h>

#include <iostream>

using namespace std;

class Rectangle {
 private:
  int length;
  int breadth;
  std::string name = "Rectangle";

 public:
  Rectangle() {
    length = 0;
    breadth = 0;
  }
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }

  int area() { return (length * breadth); }
  int perimeter() { return (2 * (length * breadth)); }

  // Mutation Functions
  void setBreadth(int breadth) { breadth = breadth; }
  void setLength(int length) { length = length; }

  // Getter Functions`
  int getLength() { return length; }
  int getBreadth() { return breadth; }

  ~Rectangle() { cout << "Destructor"; }
};

int main() {
  int length, breadth;
  cout << "Enter the length and breadth of the rectangle" << endl;
  cin >> length >> breadth;
  Rectangle r(length, breadth);

  printf("The area is %d\n", r.area());
  printf("The perimeter is %d\n", r.perimeter());

  cout << "Enter the new length of the rectangle" << endl;
  cin >> length;
  r.setLength(length);

  printf("The new area with length of %d, is %d\n", r.getLength(), r.area());
  printf("The new perimeter is %d\n", r.perimeter());
  return 0;
}
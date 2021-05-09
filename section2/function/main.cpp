#include <iostream>

using namespace std;

// pass by value example;
int add(int a, int b) { return a + b; }
void addByAddress(int a, int b, int* sum) { *sum = a + b; }
int main()

{
  int num1 = 10;
  int num2 = 15;

  int sum = add(num1, num2);
  int sum2 = 0;

  addByAddress(num1, num2, &sum2);

  cout << sum << endl;
}
#include <iostream>

using namespace std;

int main() {
  int A[10] = {0, 1, 2, 3, 4};

  // Can set values in array like below...
  // A[0] = 1;
  // A[1] = 2;
  // A[2] = 3;

  for (int i = 0; i < 5; i++) {
    cout << A[i] << endl;
  }
  cout << sizeof(A) << endl;


  return 0;
}
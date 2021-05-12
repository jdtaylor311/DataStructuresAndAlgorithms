#include <iostream>

using namespace std;

int *copyAndReturnArray(int A[], int size) {
  int *p;
  p = new int[size];

  for (int i = 0; i < size; i++) {
    p[i] = A[i] + 1;
  }

  return p;
};

int main() {
  int A[] = {1, 2, 3, 4, 5};
  cout << A << endl;
  int *B;
  int size = sizeof(A) / sizeof(A[0]);

  B = copyAndReturnArray(A, size);
  for (int i = 0; i < size; i++) {
    cout << B[i] << endl;
  }
  return 0;
}
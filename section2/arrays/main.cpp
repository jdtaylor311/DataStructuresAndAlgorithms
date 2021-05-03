#include <iostream>

using namespace std;

int main() {
  int n;
  cout<<"What size array do you want?"<<endl;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; i++){
    printf("Enter the value for A[%d]\n", i);
    cin >> A[i];
  }

  // Can set values in array like below...
  // A[0] = 1;
  // A[1] = 2;
  // A[2] = 3;

  for (int i = 0; i < n; i++) {
    printf("A[%d] is : %d\n", i, A[i]);
  }

  for(int x:A){
    cout<<x<<endl;
  }
  cout << sizeof(A) << endl;


  return 0;
}
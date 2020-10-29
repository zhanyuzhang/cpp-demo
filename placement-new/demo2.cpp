#include <iostream>

int main() {
  using namespace std;
  int *pt = new int[10];
  int arr[10];
  cout << pt << ", " << &pt << ", " << &pt[0] << endl;
  cout << arr << ", " << &arr << ", " << &arr[0] << ", " << arr+1;
}

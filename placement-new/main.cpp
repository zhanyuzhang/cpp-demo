// #include <iostream>
// using namespace std;

// int main() {
//   int *pi = new int {6};
//   int *arr = new int[4]{1, 2, 3, 4};

//   cout << *pi << endl;
//   cout << *arr;

//   return 0;
// }

// #include <iostream>
// #include <new>

// using namespace std;

// struct chaff {
//   char dross[20];
//   int slag;
// };

// char buffer1[50];
// char buffer2[500];

// int main() {
//   chaff *p1, *p2;
//   int *p3, *p4;

//   // 普通的 new 用法
//   p1 = new chaff;
//   p3 = new int[20];

//   // 定位new（placement new）
//   p2 = new (buffer1) chaff;
//   p4 = new (buffer2) int[20];

//   cout << p2 << ", " << &buffer1;
// }

#include <iostream>

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main() {
  using namespace std;
  double *pd1, *pd2;
  int i;
  cout << "Calling new and placement new: \n";
  pd1 = new double[N]; // use heap
  pd2 = new (buffer) double[N]; // use buffer array

  for (i = 0; i < N; i++) {
    pd2[i] = pd1[i] = 1000 + 20.0 * i;
  }

  cout << "Memory addresses:\n"
       << " heap: " << pd1
       << "  static: " << (void *)buffer << endl;

  cout << "Menory contents:\n";
  for (i = 0; i < N; i++) {
    cout << pd1[i] << " at " << &pd1[i] << ";";
    cout << pd2[i] << " at " << &pd2[i] << endl;
  }

  cout << "\nCalliing new and placement new a second time:\n";
  double *pd3, *pd4;
  pd3 = new double[N];
  pd4 = new (buffer) double[N];
  for (i = 0; i < N; i++) {
    pd4[i] = pd3[i] = 1000 + 40.0 * i;
  }

  cout << "Memory contents:\n";
  for (i = 0; i < N; i++) {
    cout << pd3[i] << " at " << &pd3[i] << ";";
    cout << pd4[i] << " at " << &pd4[i] << ";" << endl;
  }

  cout << "\nCalling new and placement new a third time: \n";
  delete [] pd1;
  pd1 = new double[N];
  pd2 = new (buffer + N * sizeof(double)) double[N];
  for (i = 0; i < N; i++) {
    pd2[i] = pd1[i] = 1000 + 60.0 * i;
  }

  cout << "Memory contents:\n";
  for (i = 0; i < N; i ++) {
    cout << pd1[i] << " at " << &pd1[i] << " ; ";
    cout << pd2[i] << " at " << &pd2[i] << endl;
  }

  delete[] pd1;
  delete[] pd3;

  return 0;
}
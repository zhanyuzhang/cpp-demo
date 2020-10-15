#include <iostream>

using namespace std;
int sum(int * arr, int size = 5);

template <typename AnyType>
void swapValue(AnyType &a, AnyType &b);

int main() {
  int a = 1;
  int b = 2;
  swapValue(a, b);
  cout << a << ", " << b << endl;
  return 0;
}

template <typename AnyType>
void swapValue(AnyType &a, AnyType &b) {
  AnyType temp = a;
  a = b;
  b = temp;
}

// int main() {
// 	int arr[5]{1, 2, 3, 4, 5};
// 	cout << sum(arr) << endl;
// 	return 0;
// }

// int sum(int arr[], int size) {
// 	int sum = 0;
// 	for (int i = 0; i < size; i++) {
// 		sum += arr[i];
// 	}
// 	return sum;
// }

// inline double square(double x) {
// 	return x * x; 
// }

// int main() {
// 	cout << square(2) << endl;
// 	return 0;
// }



// struct travel {
// 	int hours;
// 	int mins;
// };


// int main() {
// 	travel a = {1, 2};
// 	cout << a.hours + a.mins << endl;
// 	return 0;
// }

// int main() {
// 	const int size = 5;
// 	int cookies[size]{1, 2, 3, 4, 5};
// 	cout << sum(cookies, size) << endl; 
// 	return 0;
// }

// int sum(int * arr, int size) {
// 	int sum = 0;
// 	for (int i = 0; i < size; i++) {
// 		sum += arr[i];
// 	}
// 	return sum;
// }
#include <valarray>
#include <iostream>

using std::valarray;
using std::cout;
using std:: endl;

int main() {
  double gpa[5] = {3.1, 3.5, 3.8, 2.9, 3.3};
  valarray<double> v1;
  valarray<int> v2(8);
  valarray<int> v3(10, 8);

  valarray<double> v4(gpa, 4);
  
  cout << v4.sum() << endl;
  cout << v4.min() << endl;
  cout << v4.max() << endl;
  cout << v4.size() << endl;

  /
}
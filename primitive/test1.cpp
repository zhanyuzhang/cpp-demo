#include <iostream>
#include <climits>
#include <string>


int main() {
  using namespace std;
  // cout << sizeof(char) << endl; // 1
  // cout << sizeof(short) << endl; // 2
  // cout << sizeof(int) << endl; // 4
  // cout << sizeof(long) << endl; // 4
  // cout << sizeof(long long ) << endl; // 8
  // unsigned a = -100;
  // cout << a;

  // short sam = SHRT_MAX;
  // unsigned short sue = sam;
  // cout << SHRT_MIN << ", " << SHRT_MAX << endl;
  // cout << sam << endl;
  // cout << sue << endl;

  // sam = sam + 2;
  // sue = sue + 2;
  // cout << sam << endl;
  // cout << sue;

  // int a = INT_MAX;
  // int b = INT_MIN;
  // int c = UINT_MAX;
  // cout << a << ", " << b << ", " << c << endl;
  // a = a + 1;
  // b = b - 1;
  // c = c+1;

  // cout << a << ", " << b << ", " << c << endl;

  // char ch;
  // cout << "enter a character: " << endl;
  // cin >> ch;
  // cout << "Hola! ";
  // cout << "Thank you for the " << ch << " character." << endl;

  wchar_t bob = 'P';
  wcout << sizeof(bob) << endl;

  // string input = "";
  // getline(cin, input);
  // cout << input;
}
// char array version

// #include <iostream>
// const int ArSize = 10;
// void strcount(const char *str);

// int main() {
//   using namespace std;
//   char input[ArSize];
//   char next;

//   cout << "Enter a line: \n";
//   cin.get(input, ArSize);


//   while(cin) {
//     cin.get(next);
//     while(next != '\n') {
//       cin.get(next); 
//     }

//     strcount(input);
//     cout << "Enter next line (empty line to quit): \n";
//     cin.get(input, ArSize);
//   }

//   strcount(input);


//   cout << "Bye\n";
//   return 0;
// }

// void strcount(const char * str) {
//   using namespace std;
//   static int total = 0;
//   int count = 0;

//   cout << "\"" << str << "\" contains ";
//   while(*str++) {
//     count++;
//   }

//   total += count;
//   cout << count << " characters\n";
//   cout << total << " characters total\n";
// }


// string version
#include <iostream>
#include <string>

using std::string;

void strcount(const string);

int main() {
  using namespace std;
  string input;
  char next;
  cout << "Enter a line: \n";
  getline(cin, input);


  while(input != "") {
    // cin.get(next);
    // while(next != '\n') {
    //   cin.get(next); 
    // }

    strcount(input);
    cout << "Enter next line (empty line to quit): \n";
    getline(cin, input);
    cout << "\n666" << input << endl;
  }

  strcount(input);


  cout << "Bye\n";
  return 0;
}

void strcount(const string str) {
  using namespace std;
  static int total = 0;
  int count = 0;
  int i = 0;

  cout << "\"" << str << "\" contains ";
  while(str[i++]) {
    count++;
  }

  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}
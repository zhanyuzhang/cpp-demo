#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>

using std::cout;
using std::string;

int main() {
  // long cards[12] {12.0};
  // char string[] = "s";
  // cout << string;
  // char dog[] = {'d', 'o', 'g'};
  // char cat[] = {'c', 'a', 't', '\0'};
  // cout << cat;

  // char bird[] = "bird "
  //               "dog "
  //               "cat ";
  // cout << bird;

  using namespace std;
  const int Size = 15;

  // char name1[Size];
  // char name2[Size] = "C++owboy";

  // cout << "name2: " << name2 << endl;
  // cout << "what's your name ? " << endl;
  // cin >> name1;
  // cout << name1 << " has length of " << strlen(name1);

  // char name[Size];
  // int age;
  // char dessert[Size];

  // cout << "enter you name: \n";
  // cin >> age;
  // // cin.get();
  // cout << "enter you dessert: \n";
  // cin.get(dessert, Size);
  // cout << "name is" << age << " and dessert is " << dessert;

  // char charr[] = "hello World\0";
  // string stringr = charr;
  // cout << strlen(charr) << ", " << stringr.size();

  // cout << R"666("(I"m)" a baby)666";

//   struct inflatable
//   {
//     char name[20];
//     float volume;
//     double price;
//   };

//   inflatable guest{
//     "chess zhang",
//     12.33,
//     33.99
//   };

//  inflatable guest2 = guest;


//  cout << guest.name << ", " << guest.volume << ", " << guest.price << endl;
//  cout << guest2.name << ", " << guest2.volume << ", " << guest2.price;

  // union one4all {
  //   int int_val;
  //   long long_val;
  //   double double_val;
  // };

  // one4all pail;
  // pail.int_val = 15;
  // cout << pail.int_val;

  // enum enum1
  // {
  //   red,
  //   origin,
  //   yellow,
  //   blue,
  //   violet = 10,
  //   black,
  //   purple
  // };

  // cout
  //     << black;

  // int *p1, *p2;
  // int a = 12;

  // p1 = &a;
  // p2 = p1;
  // *p1 = 13;
  // cout << p1 << ", " << p2 << ", " << a;

  // long *fellow;
  // *fellow = 3333;
  // cout << *fellow;

  // int *pt = new int;
  // *pt = 20;
  // delete pt;
  // cout <<  *pt << endl; // 不确定的值

  // int jugs = 5;
  // pt = &jugs;
  // delete pt;
  // cout << *pt;

  // int *ps = new int;
  // int *pq = ps;
  // delete pq;

  // int *pt = new int[10];
  // pt[0] = 20;
  // pt[2] = 30;
  // delete pt;
  // cout << pt2[2];

  // int *pt = new int[4];
  // int array[4] {1, 2, 3, 4};
  // pt = array;

  // cout << sizeof(array) << ", " << sizeof(pt);

  // char flower[10] = "rose";
  // int nums[] { 1, 2, 3, 4 };
  // cout << nums << "s are red\n";
  // vector<int> vi;
  // int n;
  // cin >> n;
  // vector<double> vd(n);

  // array<int, 5> ai;
  // array<double, 4> ad = {1.2, 2.1, 3.43, 4.3};
  // cout << ad[1];

  // double a1[4]{1.2, 2.4, 3.6, 4.8};
  // vector<double> a2(4);
  // a2[0] = 1.0;
  // a2[1] = 2.0;
  // a2[2] = 3.0;
  // a2[3] = 4.0;
  // array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};

  // a2.at(-2) = 18.2;
  // cout << a2[-2];

  // {
  //   char actor[30];
  //   short betsie[100];
  //   float chunk[13];
  //   long double dipsea[64];
  // }

  // {
  //   array<char, 30> actor;
  //   array<short, 100> betsi;
  //   array<float, 13> chuck;
  //   array<long double, 64> dpsea;
  // }

  // {
  //   int arr[5]{1, 3, 5, 7, 9};
  //   int even = arr[0] + arr[4];
  // }
  // {
  //   struct fish {
  //     string type;
  //     int weight;
  //     double length;
  //   };

  //   fish a1 = {
  //       "chess",
  //       18,
  //       15.2};

  //   cout << a1.type;
  // }

  // {
  //   double ted = 14;
  //   double *tedpt = &ted;
  //   cout << "ted is " << *tedpt;
  // }
  
  
  using namespace std;
  char ch;
  int count = 0;
  cout << "enter characters; enter # to quit: \n";
  cin >> ch;
  while(ch != '#') {
    cout << "please continue: " << ch;
    ++count;
    cin >> ch;
  }

  cout << endl
       << count << " characters read\n";
  
  return 0;
}
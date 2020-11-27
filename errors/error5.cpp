#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

struct Big {
  double stuff[20000];
};


int main() {
  cout << sizeof(double) << std::endl;

  Big * pb;

  // try {
  //   cout << "Trying to get a big block of memory:\n";
  //   pb = new Big[100000];
  //   cout << "Got pass the new request:\n";
  // } catch(bad_alloc & ba) {
  //   cout << "Caught the execption!\n";
  //   cout << ba.what() << endl;
  //   exit(EXIT_FAILURE);
  // }

  // cout << "Memory successfully allocated\n";
  // pb[0].stuff[0] = 4;
  // cout << pb[0].stuff[0] << endl;

  pb = new (std::nothrow) Big[1000000];
  if(pb == 0) {
    cout << "Could not allocate memory. Bye.\n";
  }

  delete [] pb;

  return 0;
}
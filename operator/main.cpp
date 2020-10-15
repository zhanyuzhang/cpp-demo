#include "mytime0.h"

using namespace std;

int main() {
  Time planning;
  Time coding(2, 40);
  Time fixing(5, 55);
  Time total;

  total = 2.0 * coding;
  cout << total << endl;
  // planning.Show();
  // coding.Show();
  // fixing.Show();
  // total.Show();
}
#include <iostream>
#include "namesp.h"


// namespace Cat {
//   int legs = 2;
//   int ears;
//   void speak(){};
// }

// namespace Dog {
//   int legs = 3;
//   int ears;
//   void speak(){};
// }


// using namespace std;
// using namespace Cat;
// using namespace Dog;

// int main() {
//   // cout << legs;
// }

// namespace Jill {
//   double bucket(double n) {}
//   double fetch;
//   struct  Hill {};
// }

// char fetch;
// int main() {
//   using namespace std;
//   using namespace Jill;
//   Hill Thrill;
//   double water = bucket(2);
//   double fetch;
//   cin >> fetch; // local
//   cin >> ::fetch; // global
//   cin >> Jill::fetch; // Jill::fetch
// }

// namespace {
//   int counts = 12;
// }

// using namespace std;

// int main() {
//   cout << counts << endl;
// }



void other(void);
void another(void);
int main(void) {
  using debts::Debt;
  using debts::showDebt;
  Debt golf = {{"Benny", "Goatsniff"}, 120.0};
  showDebt(golf);
  other();
  another();
  return 0;
}

void other(void) {
  using std::cout;
  using std::endl;
  using namespace debts;
  Person dg = {"doodles", "Glister"};
  showPerson(dg);
  cout << endl;
  Debt zippy[3];
  int i;
  for (i = 0; i < 3; i++) {
    getDebt(zippy[i]);
  }

  for (i = 0; i < 3; i++) {
    showDebt(zippy[i]);
  }

  cout << "total debt: $" << sumDebts(zippy, 3) << endl;
  return;
}

void another(void) {
  using pers::Person;
  Person collector = {"Milo", "Rightshift"};
  pers::showPerson(collector);
  std::cout << std::endl;
}

#include "sales.h"

namespace SALES {
  void setSales(Sales & s, const double ar[]) {
    double total = 0;
    s.max = ar[0];
    s.min = ar[0];

    for (int i = 0; i < QUARTERS; i++) {
      s.sales[i] = ar[i];

      if(ar[i] > s.max) {
        s.max = ar[i];
      }

      if(ar[i] < s.min) {
        s.min = ar[i];
      }

      total += ar[i];
    }

    s.average = total / QUARTERS;
  }

  void setSales(Sales & s) {
    cout << "Please input " << QUARTERS << " quarters: ";
    double arr[QUARTERS];
    for (int i = 0; i < QUARTERS; i++) {
      cin >> arr[i];
    }

    setSales(s, arr);
  }

  void showSales(Sales const & s) {
    cout << "sales are: ";
    for (int i = 0; i < QUARTERS; i++) {
      cout << s.sales[i] << " ";
    }
    cout << endl;

    cout << "average is " << s.average << ", max is " << s.max << ", min is " << s.min;
  }

}
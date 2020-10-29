#include <iostream>

#ifndef _SALES_
#define _SALES_

namespace SALES {
  using namespace std;

  const int QUARTERS = 4;
  
  struct Sales
  {
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  };

  void setSales(Sales &s, const double ar[], int n);
  void setSales(Sales & s);
  void showSales(const Sales & s);
}

#endif
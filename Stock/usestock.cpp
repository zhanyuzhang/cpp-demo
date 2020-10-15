#include <iostream>
#include "Stock.h"

int main() {
  using namespace std;
  const Stock stock = {"chessZhang33", 555};
  // Stock stock("chessZhang", 12);
  // stock.setName("ChessZhang");
  // stock.setAge(15);
  cout << stock.getName() << ", " << stock.getAge() << endl;
  return 0;
}
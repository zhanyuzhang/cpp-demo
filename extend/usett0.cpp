#include <iostream>
#include "tabtenn0.h"

int main(void) {
  using std::cout;
  using std::endl;
  TableTennisPlayer player1("Chess", "Zhang", true);
  TableTennisPlayer player2("Link", "Zhu", false);
  RatedPlayer player3(122, "Jone", "yang", false);
  RatedPlayer player4(10, player1);
  player1.Name();
  
  cout << endl << player2.HasTable();
  
  player2.ResetTable(1);
  cout << endl << player2.HasTable();

  cout << endl << player3.Rating() << endl;

  player3.Name();

  player4.Name();

  RatedPlayer player3(10, "Jone", "Yang", false);
  TableTennisPlayer &rt = player3;
  TableTennisPlayer * pt = &player3;

  rt.Name();
  pt->Name();
}
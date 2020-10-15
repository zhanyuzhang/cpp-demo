#include <iostream>
#include <cstring>
#include "golf.h"

namespace {
  using namespace std;
}

void setgolf(golf & g, const char * name, int hc) {
  strcpy(g.fullname, name);
  g.handicap = hc;
}

int setgolf(golf & g) {
  cout << "Please input fullname:\n";
  cin.getline(g.fullname, 40);
  cout << "Please input handicap: \n";
  cin >> g.handicap;

  return g.fullname ? 1 : 0;
}

void handicap(golf &g, int hc) {
  g.handicap = hc;
}

void showgolf(const golf & g) {
  cout << "fullanme is " << g.fullname << ", and handicap is " << g.handicap;
}
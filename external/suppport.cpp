#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;
extern const int states = 50;
void update(double dt) {
  
  warming += dt;
  cout << "updating global warming to " << warming;
  cout << " degrees.\n";
  
}

void local() {
  double warming = 0.8;
  cout << "Local warming = " << warming << " degrees. \n";
  cout << "But global warming = " << ::warming;
  cout << " degrees.\n";
}


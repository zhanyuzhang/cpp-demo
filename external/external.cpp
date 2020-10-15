#include <iostream>
using namespace std;

// external varible
double warming = 0.3;
void update(double dt);
void local();

int main() {
  extern const int states;
  cout << states << endl;

  const char  *  months[3] = {
      "January", "February", "March"};

  months[0] = "Fuck";

  cout << months[0];

  cout << "Global warming is " << warming << " degrees.\n";
  update(0.1);
  cout << "Global warming is " << warming << "degrees.\n";
  local();
  cout << "Global warming is " << warming << " degrees.\n";
  return 0;
}


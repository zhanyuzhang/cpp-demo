#include <iostream>
#include <cmath>

using namespace std;

struct rect {
  double  x;
  double  y;
};

struct polar {
  double distance;
  double angle;
};

polar rect_to_polar(rect rpos);
void show_result(polar ppos);

polar rect_to_polar(rect rpos) {
  polar result;
  double x = rpos.x;
  double y = rpos.y;
  result.distance = sqrt(x * x + y * y);
  result.angle = atan2(y, x);
  return result;
}

void show_result(polar ppos) {
  double angle = ppos.angle * 57.324840764331206;
  cout << "polar distance and angle are: " << ppos.distance << ", " << angle;
}

int main() {
  rect rpos;
  polar ppos;

  cout << "please input x and y: " << endl;
  cin >> rpos.x >> rpos.y;
  ppos = rect_to_polar(rpos);
  show_result(ppos);

  return 0;
}




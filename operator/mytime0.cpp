#include <iostream>
#include "mytime0.h"

Time::Time() {
  hours = minutes = 0;
}

Time::Time(int h, int m) {
  hours = h;
  minutes = m;
}

void Time::AddMin(int m) {
  minutes += m;
  hours = minutes / 60;
  minutes %= 60;
}

void Time::AddHr(int h) {
  hours += h;
}

void Time::Reset(int h, int minutes) {
  hours = h;
  minutes = h;
}

Time Time::operator+(const Time &t) const {
  Time sum;
  sum.minutes = minutes + t.minutes;
  sum.hours = hours + sum.minutes / 60;
  sum.minutes = sum.minutes %= 60;
  return sum;
}


Time Time::operator*(double mult) const {
  Time result;
  long totalminutes = mult * (hours * 60 + minutes);
  result.hours = totalminutes / 60;
  result.minutes = totalminutes % 60;
  return result;
}

void Time::Show() const {
  std::cout << hours << " hours, " << minutes << " minutes." << std::endl;  
}


Time operator*(double mult, const Time & t) {
  Time result;
  long totalMinutes = mult * (t.hours * 60 + t.minutes);
  result.hours = totalMinutes / 60;
  result.minutes = totalMinutes % 60;
  return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t) {
  os << t.hours << " hours, " << t.minutes << " minutes";
  return os;
}
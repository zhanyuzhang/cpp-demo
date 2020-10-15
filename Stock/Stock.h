#ifndef STOCK00_H_
#define STOCK00_H_
#include <string>

using namespace std;
class Stock {
private:
  string name;
  int age;

public:
  Stock( string name = "5653",  int age = 2);
  ~Stock();
  void setName(string name);
  void setAge(int age);
  string getName() const;
  int getAge() const;
};

#endif
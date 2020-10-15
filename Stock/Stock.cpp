#include <string>
#include <iostream>
#include "./Stock.h"

using namespace std;



Stock::Stock(string name1, int age1) {
  name = name1;
  age = age1;
}

Stock::~Stock() {
  std::cout << "Bye";
}

void Stock::setName(string name1) {
  name = name1;
}

void Stock::setAge(int age1) {
  age = age1;
}

string Stock::getName() const  {
  return name;
}

int Stock::getAge() const {
  return age;
}

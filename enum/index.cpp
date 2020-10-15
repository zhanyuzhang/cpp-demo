#include <iostream>

enum egg_old { Small, Medium, Large };
enum class t_shirt { Small, Medium, Large, Xlarge };

int main() {
  std::cout << int(t_shirt::Medium);
}
#include <iostream>

//1807A
int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int a, b, c;
    std::cin >> a >> b >> c;

    if(a + b == c) std::cout << "+\n";
    else std::cout << "-\n";
  }
}
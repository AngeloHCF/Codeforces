#include <iostream>

//1692A
int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int timur = 0, b, c, d, amount_ahead = 0;
    std::cin >> timur >> b >> c >> d;

    if(timur < b) amount_ahead++;
    if(timur < c) amount_ahead++;
    if(timur < d) amount_ahead++;

    std::cout << amount_ahead << "\n";
  }
}
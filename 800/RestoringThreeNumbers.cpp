#include <iostream>
#include <algorithm>

//1154A
int main() {
  int x[4];
  std::cin >> x[0] >> x[1] >> x[2] >> x[3];
  std::sort(x, x + 4, std::less<>{});

  int total = x[3];
  
  std::cout << total - x[0] << " " << total - x[1] << " " << total - x[2];
}
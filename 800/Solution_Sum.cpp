#include <iostream>

//1742A
int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    bool mhm = false;
    
    if(a + b == c || b + c == a || c + a == b)
    mhm = true;
    
    std::cout << (mhm ? "YES" : "NO") << "\n";
  }
}

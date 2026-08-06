#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

//1352A

int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int n;
    std::cin >> n;
    int result = 1;
    std::vector<int> vec;
    int length = (n == 0) ? 1 : floor(log10(abs(n))) + 1;
    std::string copy = std::to_string(n);
    
    copy.erase(std::remove(copy.begin(), copy.end(), '0'), copy.end());
    
    
    if(n % 10 == 0 && n % 10 == n)
      std::cout << result << "\n" << n << "\n";
    else {
      std::cout << copy.length() << "\n";
      for(int i = length; i > 0; i--) {
        if((n / (int)std::pow(10, i - 1)) % 10 != 0)
          std::cout << (int)std::pow(10, i - 1) * ((n / (int)std::pow(10, i - 1)) % 10) << " ";
        }
        std::cout << "\n";
      }

  }
}

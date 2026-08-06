#include <iostream>

  //1999A
int main() {
  int t;
  std::cin >> t;  

  while(t--) {
    std::string input;
    std::cin >> input;

    int a = input[0] - '0';
    int b = input[1] - '0';
    
    std::cout << a + b << "\n";
  }
}
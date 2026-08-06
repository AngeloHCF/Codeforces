#include <iostream>
#include <string>

//61A
int main() {
  std::string one, two;
  std::cin >> one >> two;

  std::string result;

  for(size_t i = 0; i < one.size(); i++) {
    result += (one[i] != two[i] ? '1' : '0');
  }
  
  
  std::cout << result << "\n";
    
}

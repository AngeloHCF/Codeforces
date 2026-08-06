#include <iostream>

//510A

int main() {
  int n, m;
  std::cin >> n >> m;

  bool left = true;
  
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(i % 2 == 0) {

        if(left) {
          if(j < m)
            std::cout << ".";
          else if(j == m) {
            std::cout << "#";
            std::cout << std::endl;
            left = false;
          }
        } else {
          if(j == 1)
            std::cout << "#";
          else if(j < m)
            std::cout << ".";
          else if(j == m) {
            std::cout << ".";
            std::cout << std::endl;
            left = true;
          }
        }
        
        
        
        
        
        
        
        

      } else {
        std::cout << "#";
        if(j == m)
          std::cout << std::endl;
      }
    }
  }
}
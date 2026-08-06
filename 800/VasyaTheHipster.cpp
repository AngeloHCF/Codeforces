#include <iostream>

// 581A
int main() {
  int a, b;
  std::cin >> a >> b;

  // a = 2  b = 3
  int num_different = 0;
  int num_same = 0;

  while(a || b) {
    if(a > 0 && b > 0) { b--; a--; num_different++; }
    else if(b > 1) { b -= 2; num_same++; }
    else if(a > 1) { a -= 2; num_same++; }
    else if(b == 1 || a == 1) break;
  }

  std::cout << num_different << " " << num_same; 
}
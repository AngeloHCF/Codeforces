#include <iostream>
#include <algorithm>

//1903A
int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int n, k;
    std::cin >> n >> k;

    
    int *array = new int[n];
    
    for(int i = 0; i < n; i++) {
      int num;
      std::cin >> num;
      
      array[i] = num;
    }
    
    bool swapped = true;

    int initialNum = 0;
    
    while(swapped) {
      swapped = false;
      for(int i = 0; i < n - 1; i++) {
        if(array[i] > array[i + 1]) {
          std::swap(array[i], array[i + 1]);
          swapped = true;
          initialNum++;
        }
      }
    }

    if(initialNum == 0 && k <= 1)
      std::cout << "YES\n";
    else if(k >= 2)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";

  }
}
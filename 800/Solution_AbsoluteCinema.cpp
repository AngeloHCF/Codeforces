#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int result = 0;
    int n;
    std::cin >> n;
    std::vector<int> aArr;
    std::vector<int> bArr;

    for(int i = 0; i < n; i++){
      int a;
      std::cin >> a;

      aArr.push_back(a);
    }
    
    for(int i = 0; i < n; i++) {
      int b;
      std::cin >> b;

      bArr.push_back(b);
    }

    int amountA = std::accumulate(aArr.begin(), aArr.end(), 0);
    int amountB = std::accumulate(bArr.begin(), bArr.end(), 0);
    
    
    if((amountA < amountB && !aArr.empty()) || n == 1) {
      std::cout << *std::max_element(aArr.begin(), aArr.end()) + amountB << "\n";
    } else if(amountA >= amountB) {
      int placeholder = aArr[1];
      aArr[1] = bArr[1];
      bArr[1] = placeholder;
      std::cout << *std::max_element(bArr.begin(), bArr.end()) + std::accumulate(aArr.begin(), aArr.end(), 0) << "\n";
    }
    
  }
}
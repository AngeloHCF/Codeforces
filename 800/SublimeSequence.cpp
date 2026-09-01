#include <iostream>

using namespace std;

// 2148A
int main() {
  int tc;
  cin >> tc;
  
  while(tc--) {
    int x, n;
    cin >> x >> n;

    if(n % 2 == 0) {
      cout << 0 << "\n";
    } else {
      cout << x << "\n";
    }
  }
}
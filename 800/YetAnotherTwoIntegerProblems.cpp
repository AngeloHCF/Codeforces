#include <iostream>
#include <cmath>

using namespace std;

// 1409A
int main() {
  int t;
  cin >> t;

  while(t--) {
    double a, b, moves = 0;
    cin >> a >> b;

    moves = ceil(abs(a - b) / 10.0) * 10.0;
    cout << moves / 10;
    
    
  }
}
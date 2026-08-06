#include <iostream>

using namespace std;

//1857A
int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    
    int odd_nums = 0;
    
    for(int i = 0; i < n; i++) {
      int num;
      cin >> num;

      if(num % 2 == 1) odd_nums++;
    }

    if(odd_nums % 2 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
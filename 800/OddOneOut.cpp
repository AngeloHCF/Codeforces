#include <iostream>

using namespace std;

// 1915A
int main() {
  int t;
  cin >> t;

  while(t--) {
    int last_digit;
    int next_digit;
    int first_digit;
    
    for(int i = 0; i < 3; i++) {
      int num;
      cin >> num;
      
      if(i == 0) {
        first_digit = num;
      } else if(i == 1) {
        next_digit = num;
      } else if(i == 2) {
        last_digit = num;
      }
    }

    if(first_digit == next_digit) cout << last_digit << "\n";
    else if(first_digit == last_digit) cout << next_digit << "\n";
    else if(last_digit == next_digit) cout << first_digit << "\n";  
  }
}
#include <iostream>
#include <string>

using namespace std;

// O(k * d); 977A
int main() {
  string c;
  int k;

  cin >> c >> k;

  int result = stoi(c);

  while(k--) {
    if(c[c.length() - 1] == '0') {
      result /= 10;
    } else {
      result--;
    }
    c = to_string(result);
  }

  cout << result;
}
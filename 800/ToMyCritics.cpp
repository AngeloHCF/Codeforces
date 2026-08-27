#include <iostream>

using namespace std;

// 1850A
int main() {
  int n;
  cin >> n;

  while (n--) {
    int one, two, three;
    cin >> one >> two >> three;

    if (one + two >= 10) {
      cout << "YES\n";
      continue;
    } else if (one + three >= 10) {
      cout << "YES\n";
      continue;
    } else if (two + three >= 10) {
      cout << "YES\n";
      continue;
    }
    cout << "NO\n";
  }
}
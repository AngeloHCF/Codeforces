#include <iostream>

using namespace std;

//1791A
int main() {
  int n;
  cin >> n;

  while(n--) {
    char a;
    cin >> a;

    if(a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 's') cout << "YES\n";
    else cout << "NO\n";
  }
}
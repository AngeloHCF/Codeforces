#include <iostream>
#include <string>

using namespace std;

//1791C
int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    string s;
    cin >> s >> n;


    while(true) {
      if((s[0] == '0' && s[s.size() - 1] == '1') || (s[0] == '1' && s[s.size() - 1] == '0')) {
        s = s.substr(1, s.size() - 2);
        continue;
      }

      int size = s.size();

      cout << s.size() << "\n";
      break;

    }
  }
}
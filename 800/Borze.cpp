#include <iostream>
#include <string>

using namespace std;

//32B
int main() {
  string borze;
  cin >> borze;

  int n = borze.size();

  for(int i = 0; i < n;) {
    if(borze[i] == '.') {
      cout << "0";
      i++;
    } else {
      if(borze[i + 1] == '.') 
        cout << "1";
      else
        cout << "2";

      i += 2;
    }
  }
}
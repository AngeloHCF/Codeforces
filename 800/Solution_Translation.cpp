#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//41A O(n)

int main() {
  string one, two;
  cin >> one >> two;
  
  reverse(two.begin(), two.end());

  bool result = true;

  if(one.size() != two.size()) {
    result = false;
  } else {
    for(int i = 0; i < one.size(); i++) {
      if(one[i] != two[i]) {
        result = false;
      } 
    }
  }

  if(result)
    cout << "YES";
  else
    cout << "NO";
}

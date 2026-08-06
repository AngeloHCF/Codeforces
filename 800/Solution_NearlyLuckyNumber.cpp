#include <iostream>

using namespace std;

// 110A O(n)
int main() {
  string n;
  cin >> n;

  int result = 0;

  
  for(int i = 0; i < n.size(); i++) {
    if(n[i] == '4' || n[i] == '7')
      result++;
  }

  if (result == 4 || result == 7) 
    cout << "YES";
  else 
    cout << "NO";

}
#include <iostream>
#include <string>

using namespace std;

// 734A O(n)
int main() {
  int g, anton = 0, danik = 0;
  string s;
  cin >> g >> s;
  

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'A')
      anton++;
    else 
      danik++;
  } 

  
  if(anton > danik) {
    cout << "Anton";
  } else if(danik > anton) {
    cout << "Danik";
  }
  else {
    cout << "Friendship";
  }
}
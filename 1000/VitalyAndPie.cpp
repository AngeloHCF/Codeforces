#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

//525A
int main() {
  int n;
  cin >> n;

  int length = 2 * n - 2;

  string doors = "";
  
  while(length--) {
    char a;
    cin >> a;

    doors += a;
  }

  int result = 0;
  unordered_map<char, int> bag;
  
  for(int i = 0; i < doors.size(); i += 2) {
    bag[doors[i]]++;

    if(bag.count(tolower(doors[i + 1]))) {
      if(bag[tolower(doors[i + 1])] == 1) bag.erase(tolower(doors[i + 1]));
      else bag[tolower(doors[i + 1])]--;
      continue;
    }

    result++;

  }
  cout << result;
}
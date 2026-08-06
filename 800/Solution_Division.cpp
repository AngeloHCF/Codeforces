#include <iostream>
#include <string>

using namespace std;

//1669A
string findDivision(int elo) {
  if(elo >= 1900) {
    return "Division 1\n";
  } else if(elo >= 1600 && elo <= 1899) {
    return "Division 2\n";
  } else if(elo >= 1400 && elo <= 1599) {
    return "Division 3\n";
  } else {
    return "Division 4\n";
  }
}

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int k;
    cin >> k;

    cout << findDivision(k);
  }
}
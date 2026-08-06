#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

//271A
int main() {
  int y;
  cin >> y;
  y++;

  bool notFound = true;

  
  while(notFound) {
    if((y % 10 != y / 10 % 10) && (y / y % 10 != y / 100 % 10) && (y / 100 % 10 != y / 1000 % 10 ) && (y / 1000 % 10 != y % 10) && (y % 10 != y / 100 % 10) && (y / 10 % 10 != y / 100 % 10)) {
      cout << y;
      notFound = false;
    } else {
      y++;
    }
  }  
  
}

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

//59A
int main() {
  string s;
  cin >> s;

  int lowercaseAmt = 0;
  int uppercaseAmt = 0;
  
  // I can just brute force it, but I rather check if it is an uppercase
  
  for(int i = 0; i < s.size(); i++) {
     if(isupper(static_cast<unsigned char>(s[i]))) {
      uppercaseAmt++;
     } else {
      lowercaseAmt++;
     }
  }


  if(lowercaseAmt == uppercaseAmt) {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); } );
  } else if(uppercaseAmt > lowercaseAmt) {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return toupper(c); } );
  } else {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); } );
  }

  cout << s;
}
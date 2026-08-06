#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
  string one, two;
  int result = 0;
  
  int one_size = 0;
  int two_size = 0;

  cin >> one >> two;

  
    transform(one.begin(), one.end(), one.begin(), [](unsigned char c){ return tolower(c); } );
    transform(two.begin(), two.end(), two.begin(), [](unsigned char c){ return tolower(c); } );

  if(one == two) {
    cout << 0;
  } else if (one < two) {
    cout << -1;
  } else {
    cout << 1;
  }










  /* 
  cout << (one == two);

  cout << (one == two);
  
  if(one == two) {
    cout << result;
    return 0;
  }

  map<char, int> alphabet = { {'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7}, {'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12}, {'m', 13}, {'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19}, {'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25}, {'z', 26}};

  for(int i = 0; i <= one.size(); i++) {
    one_size += alphabet[one[i]];
    two_size += alphabet[two[i]];
  }

  if(one_size < two_size) {
    result = -1;
  } else if(two_size < one_size) {
    result = 1;
  }

  cout << one_size << two_size;
  
  */
  return 0;
}
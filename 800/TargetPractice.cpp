#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1873C
int main() {
  vector<vector<int>> target = {
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  };

  int n;
  cin >> n;

  while (n--) {

    int result = 0;
    for (int i = 0; i < 10; i++) {
      string t;
      cin >> t;

      for (int j = 0; j < 10; j++) {
        if (t[j] == 'X') {
          result += target[i][j];
        }
      }
    }
    cout << result << "\n";
  }
}
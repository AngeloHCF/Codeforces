#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

//1399A
int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> list(n);

    for(int i = 0; i < n ; i++) {
      cin >> list[i];
    }

    //sort vector
    sort(list.begin(), list.end());

    // traverse the vector
    bool changed = true;
    while(changed) {
      changed = false;

      for(int i = 0; i < n; i++) {
        if(i < n - 1 && abs(list[i] - list[i + 1]) <= 1 && list[i] != -1 && list[i + 1] != -1) {
          if(list[i] <= list[i + 1]) {
            list[i] = -1;
          } else { 
            list[i + 1] = -1;
          }
          changed = true;
        }
      }
    }

      int amount_of_numbers = 0;
      
      // for(int i = 0; i < n; i++) {
      //   cout << list[i] << " ";
      // }
      
      for(int i = 0; i < n; i++) {
        if(list[i] != -1) amount_of_numbers++;
      }

      // cout << "\nAmount of Numbers: " << amount_of_numbers << "\n";
      
      if(amount_of_numbers == 1)
        cout << "YES\n";
      else
        cout << "NO\n";
      
  }
}
/*
#include <iostream>

using namespace std;

// 1878A
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    
    bool most_common = false;
    
    for(int i = 0; i < n; i++) {
      int *arr = new int[k];
      
      int num;
      cin >> num;
      if(num == k) most_common = true;
    }
    
    if(most_common)
    cout << "YES\n";
    else
    cout << "NO\n";
  }
}
*/

#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n, k;
    cin >> n >> k;

    bool found_k = false;

    for(int i = 0; i < n; i++) {
      int num;
      cin >> num;
      found_k |= (num == k);
    }

    if(found_k)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

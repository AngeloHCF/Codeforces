#include <iostream>
#include <vector>

using namespace std;

// 1829B
int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> list(n);

    for(int i = 0; i < n; i++) {
      cin >> list[i]; 
    } 

    int current_blank_count = 0;
    int larg_num = 0;

    
    for(int i = 0; i < n; i++) {
      if(list[i] != 0) { 
        if(current_blank_count > larg_num) larg_num = current_blank_count;
        current_blank_count = 0;
        continue;
      }
      current_blank_count++;
      if(i == n - 1)
        if(current_blank_count > larg_num) larg_num = current_blank_count;
    }

    cout << larg_num << "\n";
      
  }
}


#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

//1512A
int main() {
  int t;
  cin >> t;


  while(t--) {
    int amt;
    cin >> amt;

    vector<int> vec(amt);
    
    for(int i = 0; i < amt; i++) {
      int num;
      cin >> num;

      vec[i] = num;
    }

    unordered_map<int, int> list;

    for(int j = 0; j < amt; j++) {
      if(list.count(vec[j])) list[vec[j]] = -1;
      else list.insert({ vec[j], j });
    }


    
    int answer;
    
    for(const auto& [number, amount] : list) {
      
      if(amount >= 0)
        answer = amount;
    }
    
    cout << ++answer << "\n";
    
  }
}
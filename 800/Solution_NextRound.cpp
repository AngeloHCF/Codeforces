#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
  int result = 0;
  
  int n, k;
  cin >> n >> k;
  cin.ignore();
    
  string nums;
  getline(cin, nums);
  stringstream ss(nums);

  int x;

  vector<int> numV = {};

  while(ss >> x) {
    numV.push_back(x);
  }

  int score = numV[k - 1];

  for(auto c : numV) {
    if(c >= score && c != 0) {
      result++;
    }
  }

  cout << result;
  
  return 0;
} 
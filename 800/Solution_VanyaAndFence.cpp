#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// 677A
int main() {
  string height;
  vector<int> people_height;

  int result = 0;
  int n, h;
  cin >> n >> h;

  cin.ignore();

  getline(cin, height);

  stringstream ss(height);

  int x;
  while(ss >> x) 
    people_height.push_back(x);
  
  
    
  for(int i = 0; i < n; i++) {
    if(people_height[i] > h)
      result += 2;
    else
      result++;
  }
  cout << result;
}
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 758A
int main() {
  int n;
  cin >> n;

  vector<int> arr;

  while (n--) {
    int num;
    cin >> num;

    arr.push_back(num);
  }

  int max = *max_element(arr.begin(), arr.end());

  int result = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < max) {
      int difference = max - arr[i];
      result += difference;
    }
  }

  cout << result;
}
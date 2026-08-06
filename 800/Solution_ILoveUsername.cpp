// #include <iostream>
// #include <vector>

// //155A
// int main() {
//   int n;
//   std::cin >> n;

//   int amazing_performance = 0;
//   int max = 0;
//   int min = 0;
//   std::vector<int> nums;
  
//   while(n--) {
//     int t;
//     std::cin >> t;
//     nums.push_back(t);
//   }

//   max = nums[0];
//   min = nums[0];

//   for(int i = 1; i < nums.size(); i++) {
//     if(nums[i] > max) {
//       max = nums[i];
//       amazing_performance++;
//     } else if(nums[i] < min) {
//       min = nums[i];
//       amazing_performance++;
//     }
//   }

//   std::cout << amazing_performance;
// }

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int max, min;
  cin >> max;
  min = max;

  int amazing_performance = 0;
  
  for(int i = 1; i < n; i++) {
    int t;
    cin >> t;
    if(t > max) {
      max = t;
      amazing_performance++;
    } else if (t < min) {
      min = t;
      amazing_performance++; 
    }
  }

  cout << amazing_performance;
}

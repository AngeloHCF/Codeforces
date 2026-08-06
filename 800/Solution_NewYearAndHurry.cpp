// #include <iostream>
// #include <vector>
// #include <numeric>

// //750A

// int main() {
//   int n, k;
//   std::cin >> n >> k;

//   int time_difference = 240 - k;
//   std::vector<int> track_numbers;

//   for(int i = 1; i <= n; i++) {
//     int accumulation = std::accumulate(track_numbers.begin(), track_numbers.end(), 0);

//     if(accumulation + (5 * i) > time_difference) {
//       break;
//     }
    
//     if(accumulation >= time_difference) {
//       break;
//     }
    
//     int num = (5 * i);
//     track_numbers.push_back(num);    
//   }
  
//   std::cout << track_numbers.size();
//   return 0;
// }

#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int time_left = 240 - k;
  int total = 0;
  int count = 0;

  for(int i = 1; i <= n; i++) {
    if(total + 5 * i > time_left) {
      break;
    } else {
      count++;
      total += 5 * i;
    }
    
  }
  cout << count;
}
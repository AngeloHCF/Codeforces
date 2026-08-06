// #include <iostream>
// #include <vector>
 
// //381A

// int main() {
//   int t;
//   std::cin >> t;

//   std::vector<int> list;
  
//   int sereja = 0;
//   int dima = 0;
  
//   bool serejaTurn = true;
  
//   while(t--) {
//     int k;
//     std::cin >> k;

//     list.push_back(k);
//   }

//   while(!list.empty()) {    
//     if(serejaTurn) {
//       if(list[0] >= list[list.size() - 1]) {
//         sereja += list[0];
//         list.erase(list.begin());
//       } else {
//         sereja += list[list.size() - 1];
//         list.erase(list.begin() + list.size() - 1);
//       }
//       serejaTurn = !serejaTurn;
//     } else {

//       if(list[0] >= list[list.size() - 1]) {
//         dima += list[0];
//         list.erase(list.begin());
//       } else {
//         dima += list[list.size() - 1];
//         list.erase(list.begin() + list.size() - 1);
//       }
//       serejaTurn = !serejaTurn;
//     }
//   }

//   std::cout << sereja << " " << dima;
// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; 
  cin >> n;
  // this allocates memory no need to push_back
  vector<int> list(n);

  bool serejaTurn = true;
  int left = 0; int right = list.size() - 1;
  int sereja = 0; int dima = 0;
  
  for(int i = 0; i < n; i++) {
    int k;
    cin >> k;
    list[i] = k;
  }

  for(int i = 0; i < n; i++) {

    if(serejaTurn) {
      if(list[left] > list[right]) {
        sereja += list[left];
        left++;
      } else if(list[right] >= list[left]) {
        sereja += list[right];
        right--;
      }
    } else {
      if(list[left] > list[right]) {
        dima += list[left];
        left++;
      } else if(list[right] >= list[left]) {
        dima += list[right];
        right--;
      }
    }

    serejaTurn = !serejaTurn;
  }

  cout << sereja << " " << dima;
  
}
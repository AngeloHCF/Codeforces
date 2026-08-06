/*
n = the number of events
next line contains n space separated integers

if the integer is -1 then it means a crime has occurred
otherwise the integer will be positive = the number of officiers recruits together at that time

output = number of crimes which will go untreated

3
-1 -1 1
2

8
1 -1 1 -1 -1 1 1 1
1

use a vector to track all of the events
we then loop through the vector and keep track of -1 and 1
if it's -1 then we compare the number before it, if there is no 1 then we add it to crime that will go untreated
*/

// #include <iostream>
// #include <vector>

// //427A
// using namespace std;

// int main() {
//   int n;
//   cin >> n;

//   int crime = 0;
//   vector<int> events;
  
//   while(n--) {
//     int e;
//     cin >> e;
//     events.push_back(e);
//   }

//   for(int i = 0; i < events.size(); i++) {
//     if(i == 0 && events[i] == -1) crime++;
    
//     if(events[i] == -1 && i != 0 && events[i - 1] != 1) crime++;
  
//     if(events[i] != -1 && i != 0) crime -= events[i];
//   }

//   cout << crime;
  
// }

// #include <iostream>
// #include <vector>
 
// using namespace std;
 
// int main() {
//     int n;
//     cin >> n;
    
//     int crime = 0;
//     vector<int> events;
    
//     while(n--) {
//         int e;
//         cin >> e;
//         events.push_back(e);
//     }

//     for(int i = 0; i < events.size(); i++) {
//         if(events[i] == -1 && i == 0) {
//             crime++;
//             continue;
//           }
          
          
//           if(events[i] == -1 && events[i - 1] == -1 && i != 0) {
//             crime++;
//         } else if(events[i] == -1 && events[i - 1] != -1 && i != 0) {
//             if(crime >= events[i - 1]) {
//               crime -= (events[i - 1]);
//               crime++;
//             }
//         }
//     }
    
//     cout << crime;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int n;

//   cin >> n;

//   int crime = 0;
//   int count = 0;
//   vector<int> events;
  
//   while(n--) {
//     int e;
//     cin >> e;
//     events.push_back(e);
//   }

//   for(int i = 0; i < events.size(); i++) {
//     if(i == 0 && events[i] == -1) {
//       crime++;
//       continue;
//     }

//     if(events[i] != -1) {
//       count += events[i];
//       continue;
//     }

//     if(events[i] == -1 && events[i - 1] != -1 && i != 0) {
//       crime -= count;
//       count -= events[i - 1];
//       crime++;
//     } else {
//       crime++;
//     }
    
//   }

//   cout << crime;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int n;
//   cin >> n;

//   int untreated = 0; 
//   int available = 0; // 1
//   vector<int> events;

//   while(n--) {
//     int e;
//     cin >> e;
//     events.push_back(e);
//   }

//   for(int i = 0; i < events.size(); i++) {
//     if(events[i] == -1 && available == 0) {
//       untreated++;
//     } else if(events[i] != -1) {
//       available += events[i];
//     } else if(events[i] == -1 && available > 0 && untreated > 0) {
//       untreated++;
//       available--;
//     }
//   }

//   cout << untreated;
// }

// 427A
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int n, available_cops = 0;
//   cin >> n;

//   vector<int> list;
//   int crime = 0;

//   while(n--) {
//     int k;
//     cin >> k;

//     list.push_back(k);
//   }

//   for(int i = 0; i < list.size(); i++) {
//     if(list[i] != -1) {
//       available_cops += list[i];
//     } else if (available_cops > 0) { 
//         available_cops--;
//       } else {
//         crime++;
//       }
//     }

//   cout << crime;
// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int available_crime = 0;
  int crime = 0;

  while(n--) {
    int k;
    cin >> k;

    if(k != -1) {
      available_crime += k;
    } else if(available_crime > 0) {
      available_crime--;
    } else {
      crime++;
    }
  }

  cout << crime;

}
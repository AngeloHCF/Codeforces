// #include <iostream>
// #include <string>
// #include <vector>

// int main() {
//   std::string one, two, three;
//   std::cin >> one >> two >> three;

//   std::vector<char> first;
//   std::vector<char> second;
  
//   if(three.size() == one.size() + two.size()) {
//     for(int i = 0; i < three.size(); i++) {
//       for(int j = 0; j < one.size(); j++) {
//         if(one[j] == three[i]) {
//           one.erase(j, 1);
//           first.push_back(three[i]);
//           continue;
//         }
//       }
//     }

    
    
//     for(int i = first.size() - 1; i >= 0; i--) {
//       for(int j = 0; j < three.size(); j++) {
//         if(three[j] == first[i]) {
//           three.erase(j, 1);
//           continue;
//         }
//       }
//     }
    
//     if(first.size() > two.size() || first.size() < two.size()) {
//       std::cout << "NO";
//     } else { 
//       for(int i = 0; i < three.size(); i++) {
//         for(int j = 0; j < two.size(); j++) {
//           if(two[j] == three[i]) {
//             two.erase(j, 1);
//             second.push_back(three[i]);
//             continue;
//           }
//         }
//       }
//       std::cout << three.size() << " " << second.size() << "\n";
//     }
    


    
//     // for(int i = second.size() - 1; i >= 0; i--) {
//     //   for(int j = 0; j < three.size(); j++) {
//     //     if(three[j] == second[i]) {
//     //       three.erase(j, 1);
//     //       continue;
//     //     }
//     //   }
//     // }

//     if(three.empty())
//       std::cout << "YES";
//     else
//       std::cout << "NO";
    
//   } else {
//     std::cout << "NO";
//   }
// }

// /*
// #include <iostream>
// #include <string>
// #include <vector>

// int main() {
//   std::string one, two, three;
//   std::cin >> one >> two >> three;

//   std::vector<char> first;
//   std::vector<char> second;
  
//   if(three.size() == one.size() + two.size()) {
//     for(int i = 0; i < three.size(); i++) {
//       for(int j = 0; j < one.size(); j++) {
//         if(one[j] == three[i]) {
//           one.erase(j, 1);
//           first.push_back(three[i]);
//           continue;
//         }
//       }
//     }

    
    
//     for(int i = first.size() - 1; i >= 0; i--) {
//       for(int j = 0; j < three.size(); j++) {
//         if(three[j] == first[i]) {
//           three.erase(j, 1);
//           continue;
//         }
//       }
//     }
//     std::cout << three.size() << " " << first.size() << "\n";


//     for(int i = 0; i < three.size(); i++) {
//       for(int j = 0; j < two.size(); j++) {
//         if(two[j] == three[i]) {
//           two.erase(j, 1);
//           second.push_back(three[i]);
//           continue;
//         }
//       }
//     }

//     std::cout << three.size() << " " << second.size() << "\n";
    
//     for(int i = second.size() - 1; i >= 0; i--) {
//       for(int j = 0; j < three.size(); j++) {
//         if(three[j] == second[i]) {
//           three.erase(j, 1);
//           continue;
//         }
//       }
//     }

//     if(three.empty())
//       std::cout << "YES";
//     else
//       std::cout << "NO";
    
//   } else {
//     std::cout << "NO";
//   }
// }




// */

#include <iostream>
#include <map>

int main() {
  std::string guest_one, guest_two, disorder_name, names;
  std::cin >> guest_one >> guest_two >> disorder_name;

  names = guest_one + guest_two;
  
  std::map<char, int> names_tracker;
  std::map<char, int> disorder_tracker;

  bool same_num = true;
  
  for(int i = 0; i < names.size(); i++) {
    if(names_tracker.count(names[i])) {
      int amount = names_tracker[names[i]] + 1;
      names_tracker[names[i]] = amount;
    } else {
      names_tracker[names[i]] = 1;
      // set this equal to 1
    }
  }

  for(int i = 0; i < disorder_name.size(); i++) {
    if(disorder_tracker.count(disorder_name[i])) {
      int amount = disorder_tracker[disorder_name[i]] + 1;
      disorder_tracker[disorder_name[i]] = amount;
    } else {
      disorder_tracker[disorder_name[i]] = 1;
      // set this equal to 1
    }
  }

  for(int i = 0; i < disorder_name.size(); i++) {
    // I need to iterate over disorder_name not names since disorder_names could have an extra letter we won't ever know 
    if(disorder_tracker.count(disorder_name[i]) && names_tracker.count(disorder_name[i])) {
      int disorder_num = disorder_tracker[disorder_name[i]];
      int names_num = names_tracker[disorder_name[i]];

      if(disorder_num == names_num) {
        continue;
      } else {
        same_num = false;
        break;
      }
      
    }
  }
  
  if(same_num)
    std::cout << "YES";
  else
    std::cout << "NO";
  
}

/* BETTER VERSION
for (char c : names)
    names_tracker[c]++;

for (char c : disorder_name)
    disorder_tracker[c]++;

if (names_tracker == disorder_tracker)
    std::cout << "YES";
else
    std::cout << "NO";
*/
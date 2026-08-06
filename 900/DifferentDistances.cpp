#include <iostream>
#include <vector>

std::vector<int> create_array(std::vector<int> &list, std::vector<int> &difference_vector) {
  static std::vector<int> return_vector(4); 
  
  bool changed = true;
  int number = 1;
  
  for(int i = 0; i < difference_vector.size(); i++) {
    if(difference_vector[i] == 0 && changed) {

      for(int j = 1; j <= list.size() - 1; j++) {
        if(j == list.size() - 1) return return_vector;

        if(list[j] == 0) {
          int position = 0;
          
          for(int k = j + 1; k < list.size(); k++) {
            position = k - j;
            list[position] = number;
            difference_vector[i] = position;
            changed = false;
          }
          
        } 
        if(changed) return return_vector;
        break;
      }

    }
    
  }
  
}

int main() {
  int t;
  std::cin >> t;

  while(t--) {
    int n;
    std::cin >> n;

    int vector_size = n * 4;
    
    std::vector<int> difference_vector = {0, 0, 0, 0};
    std::vector<int> list(vector_size);

    std::vector<int> nums = create_array(list, difference_vector);
  }
}
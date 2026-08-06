#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<std::pair<int, int>> teams;

  for(int i = 0; i < n; i++) {
    int h, a;
    std::cin >> h >> a;

    teams.emplace_back(h, a);
  }

  int result = 0;
  int size = teams.size();
  
  for(int i = 0; i < size; i++) {
    auto [home, away] = teams[i];
    for(int j = 0; j < size; j++) {
      auto [otherHome, otherAway] = teams[j];
      if(home == otherAway && i != j) {
        result++;
      }
    }
  }
  
  std::cout << result;
}
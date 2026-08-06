#include <unordered_set>
#include <iostream>

//228A
int main() {
  int one, two, three, four;
  std::cin >> one >> two >> three >> four;

  std::unordered_set<int> result = {one, two, three, four};

  std::cout << 4 - result.size();
}
#include <iostream>
#include <unordered_set>
#include <string>
#include <cctype>

// 443A
int main() {
  std::string line;
  std::getline(std::cin, line);

  std::unordered_set<char> track;
  
  for(auto c : line)
    if(std::isalpha(static_cast<unsigned char>(c)))
      track.insert(std::tolower(static_cast<unsigned char>(c)));
  
  std::cout << track.size();
}
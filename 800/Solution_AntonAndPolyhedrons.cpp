#include <iostream>
#include <string>
#include <unordered_map>

//785A

int main() {
  int n;
  std::cin >> n;

  int result = 0;

  std::unordered_map<std::string, int> faces = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
  
  while(n--) {
    std::string s;
    std::cin >> s;
    
    result += faces[s];
  }

  std::cout << result;
}
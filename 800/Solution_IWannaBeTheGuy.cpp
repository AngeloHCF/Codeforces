#include <iostream>

int main() {
  int n;
  std::cin >> n;

  bool canPass[101] = {false};

  int littleX;
  std::cin >> littleX;
  
  bool lvlsCompleted = true;

  for(int i = 0; i < littleX; i++) {
    int a;
    std::cin >> a;

    canPass[a] = true;
  }

  int littleY;
  std::cin >> littleY;

  for(int i = 0; i < littleY; i++) {
    int a;
    std::cin >> a;

    canPass[a] = true;
  }

  for(int i = 1; i <= n; i++) {
    if(!canPass[i]) {
      lvlsCompleted = false;
      return 0;
      break;
    }
  }
    std::cout << "Oh, my keyboard!";

}
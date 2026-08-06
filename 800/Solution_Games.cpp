// when the home uniform color of the host team matches the guests uniform

// the host team puts on its guest uniform, for each team the color of the home and guest uniform is different

// there are n teams,
// championship consists of n(n - 1)
// 3 (3 - 1) = 3(2) = 6 games

// manao wonders how many times during the championship is the host the host team going to put on the guest uniform?

// i know the colors of the guest and home uniform for each team

// first line contains an integer n (2 <= n <= 30)
// each of the following line contains a pair of distinct space separated integers h and a
// the colors of the i-th's team's home and guest uniforms

// print the number of games where the host team is going to play in the guest unfiform

// 3
// 1 2 1 team home color is 1 and guest uniform color is 2
// 2 4 2 team home color is 2 and guest uniform color is 4
// 3 4 3 team home color is 3 and guest uniform color is 3

// output = 1
// output is 1 because team 1s home uniform color is the same as team 2 guest color

// 3
// 1 2
// 2 4
// 3 4

//268A
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  int result = 0;

  std::vector<int> home;
  std::vector<int> away;
  
  for(int i = 0; i < n; i++) {
    int h, a;
    std::cin >> h >> a;

    home.push_back(h);
    away.push_back(a);
  }

  for(int i = home.size() - 1; i >= 0; i--) {
    for(int j = away.size() - 1; j >= 0; j--) {
      if(home[i] == away[j])
        result++;
    }
  }

  std::cout << result << "\n";
}
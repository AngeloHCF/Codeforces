#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string n;

  // matrix, we need to find the indices to place one
  // vector<vector<int>> matrix(5, vector<int>(5, 0)); // don't need this

  int col = 0;
  int row = 0;
  
  // get users input
  int k = 0;

  int moves = 0;

  while(k <= 4) {
    getline(cin, n);
    n.erase(remove(n.begin(), n.end(), ' '), n.end());

    for(int i = 0; i <= n.size(); i++) {
      if(n[i] == '1') {
        col = i;
        row = k;
      }
    }

    k++;
  }


  /*
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0
  */

  // calculation to find middle

  /*
  while(row != 2 || col != 2) {
    if(row > 2) {
      moves++;
      row--;
    } else if(row < 2) {
      moves++;
      row++;
    }
    
    if(col > 2) {
      moves++;
      col--;
    } else if(col < 2) {
      moves++;
      col++;
    }
  }
  don't need this either
  */ 

  // manhattan distance
  moves = abs(row - 2) + abs(col - 2);
  
  cout << moves;
}
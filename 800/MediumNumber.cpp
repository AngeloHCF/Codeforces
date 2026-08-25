
#include <iostream>
#include <algorithm>

using namespace std;

// 1760A
int main() {

  int t;
  cin >> t;

  while(t--) {
    int one, two, three;
    cin >> one >> two >> three;
    int arr[3] = {one, two, three};

    sort(arr, arr + 3);
    cout << arr[1];
  }
                                                                

}
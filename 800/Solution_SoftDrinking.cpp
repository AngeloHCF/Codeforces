/* n = a group of friends
k = amount of bottles of a soft drink
each bottle has l milliliters of the drink
they bought c limes and each of them into d slices
after that they found p grams of salt

to make a toast, each friend needs to nl milliliters of the drink
a slice of lime
np grams of salt

How many toasts can each friend make?

3 4 5 10 8 100 3 1
n = 3 friends
k = 4 bottles
l = 5 milliliters
c = 10 limes
d = 8 limes into d slices
p = 100 grams of salt
nl = 3 milliliters of the drink
np = 1 grams of salt
*/

// 151A
// #include <iostream>
// #include <algorithm>

// int main() {
//   int n, k, l, c, d, p, nl, np;
//   std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

//   int overallMilliliters = k * l;
//   int amountOfDrinksToMake = overallMilliliters / n;
//   int limesDrinks = c * d;
//   int salt = p / np;

//   int minAmount = std::min({amountOfDrinksToMake, limesDrinks, salt});
  
//   std::cout << minAmount << "\n" << n << "\n";
  
//   std::cout << minAmount/n;
// }

//151A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  double n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  double toasts = (k * l) / n;
  double lime_toasts = (l * c);
  double salt_toasts = p / np;

  double answer = ceil(min({toasts, lime_toasts, salt_toasts}) / n);

  cout << answer;

}
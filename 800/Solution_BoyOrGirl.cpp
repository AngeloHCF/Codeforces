#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

// 236A
int main() {
  string s;
  cin >> s;

  unordered_map<char, int> tracking {};

  for(int i = 0; i < s.size(); i++) {
    if(tracking.find(s[i]) == tracking.end()) {
      tracking.insert({s[i], i});
    } 
  }  


  if(tracking.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM";
  }

}

/*
  1. wrong data structure choice
  I never use the int value a better structure is

  unordered_set<char>

  2. unnecesary find() + insert()
  this is extra work

  maps already prevent duplicate keys logically

  3. overcomplicated logic
  I can replace the entire loop with

  unordered_set<char> tracking(s.begin(), s.end());
*/
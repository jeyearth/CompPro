/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> vec(3);
  vec = {A, B, C};
  sort(vec.begin(), vec.end());

  int ans = vec.at(vec.size() - 1) - vec.at(0);
  cout << ans << endl;
}

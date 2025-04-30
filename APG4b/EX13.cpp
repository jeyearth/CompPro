/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0;
  vector<int> vec(N);
  for (int i = 0; i < N; i++)
  {
    /* code */
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  int ave = sum / N;

  for (int i = 0; i < N; i++)
  {
    /* code */
    if (vec.at(i) > ave) {
        cout << vec.at(i) - ave << endl;
    } else {
        cout << ave - vec.at(i) << endl;
    }
  }
  
}

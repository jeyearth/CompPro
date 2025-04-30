/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int a = 1;
  for (int i = 0; i < S.size(); i++)
  {
    /* code */
    if (S.at(i) == '+') {
        a++;
    } else if (S.at(i) == '-') {
        a--;
    }
  }
  
  cout << a << endl;
}

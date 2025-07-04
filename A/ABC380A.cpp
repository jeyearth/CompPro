/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    int n;
    cin >> n;

    vector<int> digits(10, 0);
    while (n > 0)
    {
        digits[n % 10]++;
        n /= 10;
    }

  if(digits.at(1) == 1 && digits.at(2) == 2 && digits.at(3) == 3){
    cout << "Yes\n";
  }
  else{
    cout << "No\n";
  }

    return 0;
}

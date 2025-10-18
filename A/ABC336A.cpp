/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;
    string ans = "L";
    for (int i = 0; i < n; i++)
    {
        ans += "o";
    }
    ans += "ng";
    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int ans = 0;
    for (int i = 1; i <= 12; i++)
    {
        string s;
        cin >> s;
        if (s.length() == i) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

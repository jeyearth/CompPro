/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s;
    cin >> s;

    int ans = s.length();

    // 引く値
    int num = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int a = int(s.at(i)-'0');
        if (a < num) {
            a += 10 * ((num - a - 1) / 10 + 1);
        }
        int t = a - num;
        ans += abs(t);
        num += abs(t);
    }

    cout << ans << endl;
    return 0;
}

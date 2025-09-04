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

    int love_num = 753;
    int ans = __INT_MAX__;
    for (int i = 0; i < s.length(); i++)
    {
        string substr = s.substr(i, 3);
        int num = stoi(substr);
        ans = min(ans, abs(num - love_num));
    }
    cout << ans << endl;
    return 0;
}

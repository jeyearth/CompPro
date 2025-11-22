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
    string s;
    cin >> n >> s;
    int ans = -1;
    for (int i = 0; i < n - 2; i++) {
        string substr = s.substr(i, 3);
        if (substr == "ABC") {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string ans = "Yes";
    if (a < c) {
        ans = "No";
    } else if (a == c) {
        if (b < d) {
            ans = "No";
        }
    }

    cout << ans << endl;
    return 0;
}

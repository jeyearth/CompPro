/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    string c;
    cin >> c;

    int ans;
    if (c == "Red") {
        ans = min(g, b);
    } else if (c == "Green") {
        ans = min(r, b);
    } else if (c == "Blue") {
        ans = min(r, g);
    } else {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}

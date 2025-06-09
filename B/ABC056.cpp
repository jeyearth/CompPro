/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int W, a, b;
    cin >> W >> a >> b;

    int ar = a + W;
    int br = b + W;

    int ans = 0;

    if (ar < b) {
        ans = b - ar;
    } else if (br < a) {
        ans = a - br;
    }

    cout << ans << endl;

    return 0;
}

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
    int max_num = 0;
    int initial;
    cin >> initial;
    for (int i = 0; i < n - 1; i++) {
        int p;
        cin >> p;
        max_num = max(max_num, p);
    }
    int ans = abs(initial - max_num) + 1;
    if (initial > max_num) {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}

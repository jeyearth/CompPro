/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 1) {
        cout << 0 << endl;
        return 0;
    }
    int ans = 1;
    int count = a;
    int addNum = a - 1;
    while (count < b)
    {
        count += addNum;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

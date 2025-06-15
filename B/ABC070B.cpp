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

    int ans = 0;
    int minNum = max(a, c);
    int maxNum = min(b, d);
    for (int i = minNum; i < maxNum; i++)
    {
        ans++;
    }
    cout << ans << endl;
    return 0;
}

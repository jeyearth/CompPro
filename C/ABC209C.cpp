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
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c.at(i);
    }

    long long num = 1000000007;
    sort(c.begin(), c.end());
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = ans * max(0, c.at(i) - i) % num;
    }
    cout << ans << endl;
    return 0;
}

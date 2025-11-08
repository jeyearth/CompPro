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
    int sum = 0;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int t, v;
        cin >> t >> v;
        if (sum != 0) {
            sum = max(0, sum - (t - prev));
        }
        sum += v;
        prev = t;
    }
    cout << sum << endl;
    return 0;
}

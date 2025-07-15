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
    int ans = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (k <= v.at(i)) {
            ans ++;
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}

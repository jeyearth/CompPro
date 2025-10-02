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
    vector<long long> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }
    vector<long long> ans(n);
    for (int i = 0; i < n; i++)
    {
        long long t;
        cin >> t;
        if (i == 0) {
            ans.at(i) = t;
        } else {
            ans.at(i) = min(ans.at(i - 1) + s.at(i - 1), t);
            if (i == n - 1) {
                ans.at(0) = min(ans.at(0), ans.at(i) + s.at(i));
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        ans.at(i) = min(ans.at(i), ans.at(i - 1) + s.at(i - 1));
    }

    for (long long i : ans) {
        cout << i << endl;
    }
    return 0;
}

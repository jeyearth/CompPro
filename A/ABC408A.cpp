/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, s;
    cin >> n >> s;

    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t - pre > s) {
            cout << "No" << endl;
            return 0;
        }
        pre = t;
    }

    cout << "Yes" << endl;
    return 0;
}

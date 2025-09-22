/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long n, m, t;
    cin >> n >> m >> t;
    vector<int> a_vec(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a_vec.at(i);
    }
    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        mp[x] = y;
    }

    bool is_ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (t <= a_vec.at(i)) {
            is_ok = false;
            break;
        }
        t -= a_vec.at(i);
        if (mp.count(i + 2)) {
            t += mp[i + 2];
        }
    }

    if (is_ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

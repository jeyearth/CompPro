/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    map<long long, long long> y{};

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        v.at(i) = a;
        y[a]++;
    }

    long long ans = -1;
    long long max = 0;
    for (int i = 0; i < n; i++) {
        long long c = v.at(i);
        if (y[c] == 1) {
            if (max < c) {
                max = c;
                ans = i + 1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n + 1);

    long long b = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i < k) {
            v.at(i) = 1;
            b++;
        } else {
            v.at(i) = b % 1000000000;
            b = ( (2 * b) - v.at(i - k) ) % 1000000000;
            if (b < 0) {
                b += 1000000000;
            }
        }
    }

    cout << v.at(n) << endl;
    return 0;
}

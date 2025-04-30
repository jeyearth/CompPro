/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    int ans = 0;

    while(true) {
        for (int i = 0; i < n; i++) {
            if (vec.at(i) % 2 == 1) {
                cout << ans << endl;
                return 0;
            } else {
                vec.at(i) /= 2;
            }
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> vec(n);

    bool status = false;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    for (int i = 0; i < n; i++) {
        if (vec.at(i) == "login") {
            status = true;
        } else if (vec.at(i) == "logout") {
            status = false;
        }

        if (!status && vec.at(i) == "private") {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

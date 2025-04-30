/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(3);

    for (int i = 0; i < 3; i++) {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());

    string ans;
    if (vec.at(0) * vec.at(1) == vec.at(2)) {
        ans = "Yes";
    } else {
        ans = "No";
    }

    cout << ans << endl;
    return 0;
}

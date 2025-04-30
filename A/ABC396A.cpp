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

    for (int i = 0; i < n - 2; i++) {
        if (vec[i] == vec[i + 1] && vec[i + 1] == vec[i + 2]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

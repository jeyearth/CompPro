/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        s.at(i) = str;
        num.at(i) = str.length();
    }

    string ans;
    for (int i = 0; i < n; i++) {
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (num.at(index) > num.at(j)) {
                index = j;
            }
        }
        num.at(index) = 100;
        ans = ans + s.at(index);
    }

    cout << ans << endl;

    return 0;
}

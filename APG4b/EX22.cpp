/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p.at(i) = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++) {
        cout << p.at(i).second << " " << p.at(i).first << endl;
    }

    return 0;
}

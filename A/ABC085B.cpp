/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v.at(i);
    }
    
    map<int, int> m;
    for (int x : v) {
        if (m.count(x)) {
            m[x]++;
        } else {
            m[x] = 1;
        }
    }

    cout << m.size() << endl;
    return 0;
}

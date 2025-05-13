/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> m;
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        if (m.count(n)) {
            m.at(n)++;
        } else {
            m[n] = 1;
        }
    }

    if (m.size() >= 3 || m.size() == 1) {
        cout << "No" << endl;
        return 0;
    }
    
    cout << "Yes" << endl;
    
    return 0;
}

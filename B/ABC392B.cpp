/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> x(n, false);

    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        x.at((a-1)) = true;
    }

    queue<int> q;

    int c = 0;
    for (int i = 0; i < x.size(); i++) {
        if (!x.at(i)) {
            q.push(i + 1);
            c++;
        }
    }

    cout << c << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    queue<int> que;

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            int b;
            cin >> b;
            que.push(b);
        } else {
            cout << que.front() << endl;
            que.pop();
        }
    }
    return 0;
}

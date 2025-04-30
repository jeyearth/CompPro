/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;

    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans = ans + pq.top();
        } else {
            ans = ans - pq.top();
        }
        pq.pop();
    }

    cout << ans << endl;
    return 0;
}

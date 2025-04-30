/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> cards;
    for (int i = 0; i < 100; i++) {
        cards.push(0);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int b;
            cin >> b;
            cards.push(b);
        } else {
            cout << cards.top() << endl;
            cards.pop();
        }
    }

    return 0;
}

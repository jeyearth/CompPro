/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> q_queue;

    for (int i = 0; i < q; ++i) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int x;
            cin >> x;
            q_queue.push(x);
        } else {
            if (!q_queue.empty()) {
                cout << q_queue.top() << endl;
                q_queue.pop();
            } else {
                cout << "Queue is empty" << endl;
            }
        }
    }
    return 0;
}

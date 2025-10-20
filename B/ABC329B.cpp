/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;
    priority_queue<int> pq;
    int max_val = 1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
        max_val = max(max_val, a);
    }

    while (pq.top() == max_val) {
        pq.pop();
    }
    cout << pq.top() << endl;
    return 0;
}

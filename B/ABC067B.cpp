/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> que;

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        if (que.size() < k) {
            que.push(l);
        } else if (que.top() < l) {
            que.pop();
            que.push(l);
        }
    }

    int ans = 0;
    while (!que.empty())
    {
        ans += que.top();
        que.pop();
    }

    cout << ans << endl;

    return 0;
}

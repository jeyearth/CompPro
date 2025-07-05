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
    queue<pair<long long, long long>> que;
    for (int i = 0; i < q; i++)
    {
        int query_type;
        cin >> query_type;
        if (query_type == 1) {
            int c, x;
            cin >> c >> x;
            auto it = pair<int, int>(x, c);
            que.push(it);
        } else {
            long long k;
            cin >> k;
            long long sum = 0;

            while (k > 0 && !que.empty()) {
                auto &it = que.front();
                // que.pop();
                if (it.second == k) {
                    sum += it.first * it.second;
                    k -= it.second;
                    que.pop();
                } else if (it.second > k) {
                    sum += it.first * k;
                    it.second -= k;
                    k = 0;
                } else {
                    sum += it.first * it.second;
                    k -= it.second;
                    que.pop();
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}

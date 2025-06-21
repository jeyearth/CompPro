/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    long long N, Q;
    cin >> N >> Q;

    set<long long> s;
    long long ans = 0;
    for (long long i = 0; i < Q; i++)
    {
        long long a;
        cin >> a;
        if (s.count(a))
        {
            // 含んでる
            if (s.count(a - 1) && s.count(a + 1)) {
                // 両サイドあり
                ans += 1;
            } else if (!s.count(a - 1) && !s.count(a + 1)) {
                // 両サイドなし
                ans -= 1;
            }
            s.erase(a);
        }
        else
        {
            // 含んでいない
            if (s.count(a - 1) && s.count(a + 1)) {
                // 連結
                ans -= 1;
            } else if (!s.count(a - 1) && !s.count(a + 1)) {
                // 両サイドなし
                ans += 1;
            }
            s.insert(a);
        }
        cout << ans << endl;
    }

    return 0;
}

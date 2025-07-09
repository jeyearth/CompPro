/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int x, n;
    cin >> x >> n;
    set<int> s_set;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        s_set.insert(p);
    }

    int ans = 0;
    for (int i = 0; i <= x; i++)
    {
        // 前の値が存在しないか確認
        if (s_set.count(x - i) == 0) {
            ans = x - i;
            break;
        } else if (s_set.count(x + i) == 0) {
            ans = x + i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

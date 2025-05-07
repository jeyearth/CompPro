/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<pair<int, int>> vec(N);

    for (int i = 0; i < N; i++)
    {
        int T, L;
        cin >> T >> L;
        vec.at(i) = make_pair(T, L);
    }

    sort(vec.begin(), vec.end());

    int maxIndex = vec.size() - 1;
    for (int i = 1; i <= D; i++)
    {
        int ans = 0;
        for (int j = 0; j < N; j++)
        {
            auto p = vec.at(j);
            int heavy = p.first * (p.second + i);
            ans = max(heavy, ans);
        }
        cout << ans << endl;
    }
    
    
    return 0;
}

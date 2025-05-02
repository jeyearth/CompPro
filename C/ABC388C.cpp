/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

// 未解答

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v.at(i);
    }

    long long ans = 0;
    
    for (int j = 0; const auto a : v) {
        // 越えるまで進める
        while (j < N && v[j] * 2 <= a) j++;
        ans += j;
    }

    cout << ans << endl;
    
    return 0;
}

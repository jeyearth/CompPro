/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    map<int, int> m;
    map<int, int> check;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (m.count(a)) {
            m.at(a) += 1;
        } else {
            m[a] = 1;
        }
        v.at(i) = a;
        check[a] = 0;
    }

    for (int i = 1; i <= M; i++)
    {
        if (!check.count(i)) {
            cout << 0 << endl;
            return 0;
        }
    }
    
    
    int ans = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        ans++;
        int t = v.at(i);
        m.at(t) -= 1;
        if (m.at(t) == 0) {
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.at(i) = a;
        sum += a;
    }

    long long ans = 0;

    for (int i = 0; i < N - 1; i++)
    {
        int ai = v.at(i);
        sum -= ai;
        ans += (ai * sum);
    }
    
    cout << ans << endl;
    return 0;
}

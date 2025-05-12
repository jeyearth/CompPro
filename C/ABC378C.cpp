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
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.at(i) = a;
    }

    vector<int> ans(N, -1);
    // num, index;
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        int a = v.at(i);
        if (m.count(a)) {
            ans.at(i) = m.at(a);
        }
        m[a] = i+1;
    }
    
    for (int a : ans) {
        cout << a << " ";
    }
    
    return 0;
}

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

    vector<long long> v(N, -1);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v.at(i);
    }
    
    string ans = "Yes";
    for (int i = 0; i < N - 2; i++)
    {
        if (v.at(i) * v.at(i + 2) != v.at(i + 1) * v.at(i + 1)) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

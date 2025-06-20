/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int N;
    cin >> N;
    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (!m.count(a)) {
            m[a] = 1;
        } else {
            m.at(a) += 1;
            if (m.at(a) == 2) {
                ans++;
                m.at(a) = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

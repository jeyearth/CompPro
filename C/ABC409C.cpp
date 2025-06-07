/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long N, L;
    cin >> N >> L;

    vector<long long> dot(L, 0);
    dot.at(0) = 1;
    long long index = 0;
    for (int i = 0; i < N - 1; i++)
    {
        long long d;
        cin >> d;
        index += d;
        index %= L;
        dot.at(index) ++;
    }

    if (L % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    long long ans = 0;
    long long division = L / 3;
    for (int i = 0; i < division; i++)
    {
        long long count = 1;
        for (int j = 0; j < 3; j++)
        {
            long long tar = dot.at(i + division * j);
            count *= tar;
            if (tar == 0) break;
        }
        ans += count;
    }
    cout << ans << endl;
    return 0;
}

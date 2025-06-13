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
    int A, B, M;
    cin >> A >> B >> M;

    vector<long long> va(A);
    vector<long long> vb(B);

    long long aMin = __LONG_LONG_MAX__;
    for (int i = 0; i < A; i++)
    {
        long long a;
        cin >> a;
        va.at(i) = a;
        aMin = min(aMin, a);
    }
    long long bMin = __LONG_LONG_MAX__;
    for (int i = 0; i < B; i++)
    {
        long long b;
        cin >> b;
        vb.at(i) = b;
        bMin = min(bMin, b);
    }

    long long ans = aMin + bMin;
    for (int i = 0; i < M; i++)
    {
        int x, y;
        long long c;
        cin >> x >> y >> c;
        x -= 1;
        y -= 1;
        long long discount_price = ((long long)va.at(x) + (long long)vb.at(y)) - c;
        ans = min(ans, discount_price);
    }

    cout << ans << endl;

    return 0;
}

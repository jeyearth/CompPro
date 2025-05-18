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
    int N, K;
    cin >> N >> K;

    long long m = 1;
    for (int i = 0; i < K; i++)
    {
        m *= 10;
    }

    long long ans = 1;
    for (int i = 0; i < N; i++)
    {
        long long a;
        cin >> a;
        ans *= a;
        if (ans >= m)
        {
            ans = 1;
        }
    }

    cout << ans << endl;
    return 0;
}

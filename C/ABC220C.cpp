/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long N, X;
    cin >> N;
    vector<long long> v(N);
    long long vSum = 0;
    for (int i = 0; i < N; i++)
    {
        long long a;
        cin >> a;
        v.at(i) = a;
        vSum += a;
    }
    cin >> X;

    long long ans = (X / vSum) * N;
    X %= vSum;
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (sum > X) {
            break;
        }
        sum += v.a
        t(i);
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}

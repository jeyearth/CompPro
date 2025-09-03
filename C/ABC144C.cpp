/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long n;
    cin >> n;
    long long ans = n - 1;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0) {
            long long j = n / i;
            ans = min(ans, i + j - 2);
        }
    }
    cout << ans << endl;
    return 0;
}

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

    set<long long> pq;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0) {
            pq.insert(i);
            pq.insert(n / i);
        }
    }
    
    for (auto p : pq) {
        cout << p << endl;
    }
    return 0;
}

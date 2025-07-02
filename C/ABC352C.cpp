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
    // int max_index = 0;
    long long max_value = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        sum += a;
        max_value = max(max_value, b - a);
    }

    cout << sum + max_value << endl;
    return 0;
}

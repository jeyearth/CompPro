/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;
    long long t = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (t % 3 == 1) {
            a -= 1;
            t++;
            if (a > 0) {
                a -= 3;
                t++;
            }
        } else if (t % 3 == 2) {
            a -= 3;
            t++;
        }
        long long remainder = a > 0 ? (a % 5 > 2 ? 3 : a % 5) : 0;
        long long t_count = (a / 5) * 3 + remainder;
        t += t_count;
    }
    cout << t << endl;
    return 0;
}

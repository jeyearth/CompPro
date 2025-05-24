/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int x, y;
    cin >> x >> y;

    int count = 0;

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i + j >= x) {
                count++;
                continue;
            } else if (abs(i - j) >= y) {
                count++;
                continue;
            }
        }
    }
    
    double ans = (double)count / (double)36;

    cout << setprecision(11) << ans << endl;
    return 0;
}

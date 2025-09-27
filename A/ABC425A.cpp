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

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int addNum = i * i * i;
        if (i % 2 == 1) {
            addNum = -addNum;
        }
        sum += addNum;
    }
    cout << sum << endl;
    return 0;
}

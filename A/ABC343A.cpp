/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b;
    cin >> a >> b;

    int n = 9;
    for (int i = 0; i <= n; i++)
    {
        if (a + b != i) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

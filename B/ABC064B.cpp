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

    int l = 1000;
    int r = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        l = min(l, a);
        r = max(r, a);
    }

    cout << r - l << endl;
    return 0;
}

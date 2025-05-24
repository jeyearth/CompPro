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
    int a, b;
    cin >> a >> b;

    int ans = (double)a / double(b) + 0.5;
    cout << ans << endl;
    return 0;
}

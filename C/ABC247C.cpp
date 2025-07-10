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
    string ans = "1";
    for (int i = 2; i <= n; i++)
    {
        ans = ans + " " + to_string(i) + " " + ans;
    }
    cout << ans << endl;
    return 0;
}

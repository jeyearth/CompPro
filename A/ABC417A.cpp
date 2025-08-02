/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    string ans = "";
    for (int i = a; i < n - b; i++)
    {
        ans += s.at(i);
    }
    
    cout << ans << endl;
    return 0;
}

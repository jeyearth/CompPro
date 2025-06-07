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
    string t, a;
    cin >> t >> a;

    string ans = "No";
    for (int i = 0; i < n; i++)
    {
        if (t.at(i) == 'o' && a.at(i) == 'o') {
            ans = "Yes";
        }
    }
    cout << ans << endl;
    return 0;
}

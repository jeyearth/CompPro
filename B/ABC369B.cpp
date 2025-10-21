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
    bool l_flag = false;
    bool r_flag = false;
    int l, r = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        char s;
        cin >> a >> s;
        if (!l_flag && s == 'L') {
            l = a;
            l_flag = true;
            continue;
        } else if (!r_flag && s == 'R') {
            r = a;
            r_flag = true;
            continue;
        }
        if (s == 'L') {
            ans += abs(a - l);
            l = a;
        } else {
            ans += abs(a - r);
            r = a;
        }
    }
    cout << ans << endl;
    return 0;
}

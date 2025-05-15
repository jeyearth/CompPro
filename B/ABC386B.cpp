/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string S;
    cin >> S;

    int ans = 0;

    int i = 0;
    while (i < S.length())
    {
        char a = S.at(i);
        if (a != '0') {
            ans++;
            i++;
            continue;
        } else if (a == '0') {
            if (i + 1 < S.length() && S.at(i + 1) == '0') {
                i += 2;
                ans++;
            } else {
                i++;
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}

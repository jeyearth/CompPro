/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string ans = "Even";
    if ((a * b) % 2 != 0) {
        ans = "Odd";
    }
    cout << ans << endl;
    return 0;
}

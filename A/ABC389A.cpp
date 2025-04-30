/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a, b;
    a = int(s[0] - '0');
    b = int(s[2] - '0');

    cout << a * b << endl;
    return 0;
}

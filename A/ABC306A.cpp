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
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cout << s.at(i) << s.at(i);
    }
    cout << endl;
    return 0;
}

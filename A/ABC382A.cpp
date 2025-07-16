/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '@') {
            sum++;
        }
    }
    int empty = n - sum;
    cout << empty + d << endl;
    return 0;
}

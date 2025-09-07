/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s.at(i) = s.at(i) == '1' ? '0' : '1';
    }
    cout << s << endl;
    return 0;
}

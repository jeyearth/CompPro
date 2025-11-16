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
        bool diff = true;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                diff = false    ;
                break;
            }
        }
        if (diff)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}

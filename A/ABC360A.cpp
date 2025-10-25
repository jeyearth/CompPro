/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    string s;
    cin >> s;
    bool ans = false;
    for (int i = 0; i < 3; i++)
    {
        if (s.at(i) == 'R')
        {
            for (int j = i; j < 3; j++)
            {
                if (s.at(j) == 'M') {
                    ans = true;
                }
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

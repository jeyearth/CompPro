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
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        string s = to_string(i);
        bool isAns = true;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s.at(i) != s.at(s.length() - 1 - i))
            {
                isAns = false;
                break;
            }
        }
        if (isAns)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

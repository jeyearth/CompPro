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
    int n, time;
    cin >> n >> time;

    int ans = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        int c, t;
        cin >> c >> t;
        if (t <= time)
        {
            ans = min(ans, c);
        }
    }

    if (ans == __INT_MAX__)
    {
        cout << "TLE" << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}

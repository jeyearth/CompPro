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
    int n;
    int a, b, c, d;
    cin >> n;

    vector<vector<bool>> v(100, vector<bool>(100, false));

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        for (int j = a; j < b; j++)
        {
            for (int k = c; k < d; k++)
            {
                v.at(j).at(k) = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (v.at(i).at(j))
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

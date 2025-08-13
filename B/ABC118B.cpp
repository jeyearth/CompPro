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
    int n, m;
    cin >> n >> m;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int a;
            cin >> a;
            if (mp.count(a))
            {
                mp.at(a)++;
            }
            else
            {
                mp[a] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        if (mp.count(i))
        {
            if (mp.at(i) == n)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

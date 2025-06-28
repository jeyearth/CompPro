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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        vector<long long> s_vec(n);
        for (long long j = 0; j < n; j++)
        {
            cin >> s_vec.at(j);
        }
        sort(s_vec.begin(), s_vec.end());

        int ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s_vec.at(i) <= s_vec.at(i + 1) * 2)
            {
                ans++;
            }
        }

        if (ans == 1)
        {
            cout << "ans" << -1 << endl;
        }
        else
        {
            cout << "ans" << ans << endl;
        }
    }

    return 0;
}

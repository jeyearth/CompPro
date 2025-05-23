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
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b.at(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            sum += (a * b.at(j));
        }
        sum += c;
        if (sum > 0)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

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
    cin >> n;
    vector<int> h(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> h.at(i);
    }

    vector<int> dp(n);

    dp.at(0) = 0;

    if (n > 1) {
        dp.at(1) = abs(h.at(1) - h.at(0));
    }

    for (int i = 2; i < n; i++)
    {
        int cost1 = dp.at(i - 1) + abs(h.at(i) - h.at(i - 1));
        int cost2 = dp.at(i - 2) + abs(h.at(i) - h.at(i - 2));

        dp.at(i) = min(cost1, cost2);
    }

    cout << dp.at(n - 1) << endl;

    return 0;
}

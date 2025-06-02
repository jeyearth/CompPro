/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;

    vector<vector<int>> acts(n, vector<int>(3));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> acts.at(i).at(j);
        }
    }

    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp.at(0) = {acts.at(0).at(0), acts.at(0).at(1), acts.at(0).at(2)};

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j == k) continue;
                dp.at(i).at(k) = max(dp.at(i).at(k), dp.at(i - 1).at(j) + acts.at(i).at(k));
            }   
        }
    }
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        ans = max(ans, dp.at(n - 1).at(i));
    }

    cout << ans << endl;
    return 0;
}

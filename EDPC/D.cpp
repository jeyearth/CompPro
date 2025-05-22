/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int N, W;
    cin >> N >> W;

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    for (int i = 1; i < N + 1; i++)
    {
        int weight, value;
        cin >> weight >> value;

        for (int j = 1; j < W + 1; j++)
        {
            if (j - weight < 0) {
                dp.at(i).at(j) = dp.at(i - 1).at(j);
            } else {
                dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i - 1).at(j - weight) + value);
            }
        }
    }

    cout << dp.at(N).at(W) << endl;
    return 0;
}

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
    int ans = 0;
    int count = 0;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights.at(i);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int target_height = heights.at(i);
        int next_height = heights.at(i + 1);
        if (target_height >= next_height) {
            count++;
        } else {
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count); // 最後の連続した降下部分を考慮
    cout << ans << endl;
    return 0;
}

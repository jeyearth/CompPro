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
    int num = 37;
    vector<vector<int>> vec(n, vector<int>(num, 0));
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            int a;
            cin >> a;
            vec.at(i).at(a) = c;
        }
    }
    int x;
    cin >> x;

    vector<int> ans;
    int min_value = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int target = vec.at(i).at(x);
        if (target == 0) {
            continue;
        } else if (target < min_value) {
            ans.clear();
            ans.push_back(i + 1);
            min_value = target;
            continue;
        } else if (target == min_value) {
            ans.push_back(i + 1);
            continue;
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i) << " ";
    }
    cout << endl;
    return 0;
}

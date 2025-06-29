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
    vector<vector<bool>> check(n, vector<bool>(n, false));

    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        vector<int> a_vec(k);
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            x--;
            a_vec.at(j) = x;
        }

        for (int j = 0; j < k - 1; j++)
        {
            for (int l = j + 1; l < k; l++)
            {
                check.at(a_vec.at(j)).at(a_vec.at(l)) = true;
            }
        }
    }

    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!check.at(i).at(j))
            {
                ans = false;
                break;
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    int num = n - m + 1;
    set<string> patterns;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            grid.at(i).at(j) = s.at(j);
        }
    }

    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j <= n - m; j++)
        {
            string pattern = "";
            for (int x = 0; x < m; x++)
            {
                for (int y = 0; y < m; y++)
                {
                    pattern += grid.at(i + x).at(j + y);
                }
            }
            patterns.insert(pattern);
        }
    }
    cout << patterns.size() << endl;
    return 0;
}

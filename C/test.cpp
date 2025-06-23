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
    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }
    int ans = n;
    for (int i = 0; i < (1 << n); i++) {
        bitset<10> bit(i);
        set<int> exist;
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            if (bit.test(k)) {
                count++;
                for (int j = 0; j < m; j++)
                {
                    if (vec.at(k).at(j) == 'o') {
                        exist.insert(j);
                    }
                }
            }
        }

        if (exist.size() == m)
        {
            ans = min(ans, count);
        }
    }

    cout << ans << endl;
    return 0;
}

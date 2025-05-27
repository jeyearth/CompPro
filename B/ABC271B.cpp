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
    int n, q;
    cin >> n >> q;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        v.at(i).resize(l);
        for (int j = 0; j < l; j++)
        {
            int a;
            cin >> a;
            v.at(i).at(j) = a;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int s, t;
        cin >> s >> t;
        s--;
        t--;
        cout << v.at(s).at(t) << endl;
    }    

    return 0;
}

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

    vector<string> s(n);
    queue<string> t;

    for (int i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }

    for (int i = 0; i < m; i++)
    {
        string tar;
        cin >> tar;
        t.push(tar);
    }
    
    for (int i = 0; i < n; i++)
    {
        string station = s.at(i);
        if (!t.empty() && s.at(i) == t.front()) {
            cout << "Yes" << endl;
            t.pop();
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

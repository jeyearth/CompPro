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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b.at(i);
    }

    sort(b.begin(), b.end());
    for (int i = 0; i < m; i++)
    {
        int target = b.at(i);
        for (int i = 0; i < n; i++)
        {
            if (a.at(i) == target) {
                a.at(i) = -1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a.at(i) != -1) {
            cout << a.at(i) << " ";
        }
    }
    
    return 0;
}

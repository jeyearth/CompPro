/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

bool is_triangle(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> l.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (l.at(i) == l.at(j) || l.at(i) == l.at(k) || l.at(j) == l.at(k)) {
                    continue;
                }
                if (is_triangle(l.at(i), l.at(j), l.at(k))) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

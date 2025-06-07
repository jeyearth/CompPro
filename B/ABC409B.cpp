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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v.at(j) >= i) {
                count++;
            }
        }
        if (count >= i) {
            ans = i;
        } else {
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}

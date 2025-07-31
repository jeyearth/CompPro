/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    for (int i = 0; i < k; i++) {
        cout << a.at(i + n - k) << " ";
    }

    for (int i = 0; i < n - k; i++)
    {
        cout << a.at(i) << " ";
    }
    
    return 0;
}

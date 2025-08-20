/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> vec(n);
    iota(vec.begin(), vec.end(), 1);

    reverse(vec.begin() + (l - 1), vec.begin() + r);
    
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

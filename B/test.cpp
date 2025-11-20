/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n - 1);
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        v.at(i) = a;
        sum += a;
    }
    sort(v.begin(), v.end());
    sum -= v.at(0);
    if (sum < x) {
        cout << -1 << endl;
        return 0;
    }
    sum = sum - v.at(n - 2);
    if (sum >= x) {
        cout << 0 << endl;
        return 0;
    }
    int num = x - sum;
    if (num <= v.at(0)) {
        cout << 0 << endl;
    } else if (x <= v.at(n - 2)) {
        cout << v.at(n - 2) << endl;
    } else {
        cout << num << endl;
    }
    return 0;
}

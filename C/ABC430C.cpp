/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

bool isAns(int a_count, int b_count, int a, int b) {
    cout << "----" << endl;
    cout << "a_count: " << a_count << endl;
    cout << "b_count: " << b_count << endl;
    return a_count >= a && b_count < b;
}

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    int ans = 0;
    int l = 0;
    int r = 0;
    int a_count = 0;
    int b_count = 0;
    while (r < a) {
        if (s.at(r) == 'a') {
            a_count++;
        } else {
            b_count++;
        }
        r++;
    }

    while (r < n) {
        if (s.at(r) == 'a') {
            a_count++;
        } else {
            b_count++;
        }
        if (isAns(a_count, b_count, a, b)) {
            ans++;
        }
        cout << "l: " << l << ", r: " << r << endl;
        cout << "Current ans: " << ans << endl;
        if (l == r) {
            r++;
        } else if (b_count >= b) {
            if (s.at(l) == 'a') {
                a_count--;
            } else {
                b_count--;
            }
            l++;
            cout << "L down" << endl;
            cout << "After L down, a_count: " << a_count << ", b_count: " << b_count << endl;
        } else {
            r++;
        }
    }

    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int res = 0;
    while(n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool judge(int n, int a, int b) {
    int sum = digitSum(n);
    if (a <= sum && sum <= b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (judge(i, a, b)) {
            ans += i;
        }
    }

    cout << ans << endl;
    return 0;
}

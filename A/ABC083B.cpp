/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n){
   if(n < 10)  return n;
   return digit_sum(n/10) + n%10;
}

bool judge(int num, int a, int b) {
    int sum = digit_sum(num);

    if (a <= sum && sum <= b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, a, b;
    int ans = 0;

    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        if(judge(i, a, b)) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}

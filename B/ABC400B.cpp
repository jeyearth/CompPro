/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long x = 0;
    long long a = 1;
    for (int i = 0; i <= m; i++) {
        x += a;

        if (x > 1000000000) {
            cout << "inf" << endl;
            return 0;
        }   
        a *= n;
    }
    
    cout << x << endl;
    return 0;
}

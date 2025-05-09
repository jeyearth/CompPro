/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long i = 1;
    while (X != 1) {
        i++;
        X /= i;
    }
    
    cout << i << endl;
    return 0;
}

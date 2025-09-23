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

    int div = 1;
    int f_x = 0;
    while (div <= n)
    {
        int digit = (n / div) % 10;
        f_x += digit;
        div *= 10;
    }
    
    if (n % f_x == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

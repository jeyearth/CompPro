/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

bool isCheck(int h, int m) {
    if (h < 20) {
        if (h % 10 < 6) {
            return true;
        }
    } else {
        if (m / 10 < 4) {
            return true;
        }
    }
    return false;
}

int main() {
    int h, m;
    cin >> h >> m;

    while (!isCheck(h, m))
    {
        m++;
        if (60 <= m) {
            m = 0;
            h++;
            if (24 <= h) {
                h = 0;
            }
        }
    }

    cout << h << " " << m << endl;
    return 0;
}

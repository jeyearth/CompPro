/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int N, D, X;
    cin >> N >> D >> X;

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        int j = 0;
        while (j < D)
        {
            ans++;
            j += a;
        }
    }

    cout << ans + X << endl;
    
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    int N, L, R;
    cin >> N >> L >> R;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        int ans;
        if (L <= a && a < R) {
            ans = a;
        } else if (a < L) {
            ans = L;
        } else if (R <= a) {
            ans = R;
        }
        cout << ans << " ";
    }
    
    return 0;
}

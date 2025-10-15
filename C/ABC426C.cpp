/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> pcs(n + 1, 1);

    int min_os = 1;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int count = 0;
        while(min_os <= x)
        {
            count += pcs[min_os];
            pcs[min_os] = 0;
            min_os++;
        }
        cout << count << "\n";
        pcs[y] += count;
    }
    return 0;
}

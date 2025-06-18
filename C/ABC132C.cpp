/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> v.at(i);
    }
    sort(v.begin(), v.end());

    int ans = 0;

    int x = v.at(N / 2 - 1);
    int y = v.at(N / 2);

    if (x != y) {
        ans = y - x;
    }

    cout << ans << endl;
    
    return 0;
}

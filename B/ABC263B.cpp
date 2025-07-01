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
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> vec.at(i);
    }

    int index = n - 2;
    int ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (vec.at(index) == 1) {
            break;
        }
        ans++;
        index = vec.at(index) - 2;
    }
    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    vector<int> vec(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (vec.at(i) == vec.at(i + 1))
        {
            ans++;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}

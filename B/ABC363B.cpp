/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, t, p;
    int ans = 0;
    cin >> n >> t >> p;
    vector<int> a_vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a_vec.at(i);
    }

    bool completed = false;
    while (completed == false) {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a_vec.at(i) >= t) {
                count++;
            }
            a_vec.at(i)++;
        }
        if (count >= p) {
            completed = true;
        } else {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

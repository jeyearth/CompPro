/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s_vec(n);
    for (int i = 0; i < n; i++) {
        cin >> s_vec.at(i);
    }
    
    vector<string> ans_vec(k);
    for (int i = 0; i < k; i++)
    {
        ans_vec.at(i) = s_vec.at(i);
    }
    sort(ans_vec.begin(), ans_vec.end());
    
    for (int i = 0; i < k; i++) {
        cout << ans_vec.at(i) << endl;
    }

    return 0;
}

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

    vector<string> str_vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str_vec.at(i);
    }
    
    int ans = 0;
    set<string> str_set;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            string combined_str = str_vec.at(i) + str_vec.at(j);
            if (str_set.count(combined_str) == 0) {
                str_set.insert(combined_str);
                ans++;
            }
        }
        
    }
    cout << ans << endl;
    return 0;
}

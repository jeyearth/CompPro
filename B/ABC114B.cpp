/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int love_num = 753;
    int target_length = 3;

    string s;
    cin >> s;
    int input_num = stoi(s);

    int ans = INT_MAX;
    for (int i = 0; i <= s.length() - target_length; i++)
    {
        string sub = s.substr(i, target_length);
        int target_num = stoi(sub);
        int diff = abs(love_num - target_num);

        ans = min(ans, diff);
    }

    cout << ans << endl;
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s;
    cin >> s;

    double ans = 0.0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) != 't') continue;
        int t_count = 1;
        for (int j = i + 1; j < s.size(); j++) {
            if (s.at(j) == 't') {
                t_count++;
                int t_length = j - i + 1;
                if (t_length >=3) {
                    double up = t_count - 2;
                    double down = t_length - 2;
                    double current = up / down;
                    ans = max(ans, current);
                }
            }
        }
    }
    cout << fixed << setprecision(14);
    cout << ans << endl ;
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s, t;
    cin >> s >> t;
    set <char> t_set;
    for (char c : t) {
        t_set.insert(c);
    }

    bool ans = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (isupper(s.at(i))) {
            if (t_set.count(s.at(i - 1))) {
                continue;
            } else {
                ans = false;
                break;
            }
        }
    }
    
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

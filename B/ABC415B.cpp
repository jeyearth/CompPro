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
    int max = s.length() / 2;
    // cout << max << endl;
    for (int i = 0; i < max; i++)
    {
        int num = 2;
        for (int j = 0; j < s.length(); j++)
        {
            if (s.at(j) == '#') {
                cout << j + 1;
                s.at(j) = '.';
                if (num != 1) {
                    cout << ",";
                }
                num--;
            }
            if (num == 0) {
                cout << endl;
                break;
            }
        }
    }
    
    return 0;
}

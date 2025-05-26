/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int h, w;
    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w - 1; j++)
        {
            if (s.at(j) == 'T' && s.at(j+1) == 'T') {
                s.at(j) = 'P';
                s.at(j+1) = 'C';
            }
        }

        cout << s << endl;
    }
    
    return 0;
}

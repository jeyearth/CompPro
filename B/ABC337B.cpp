/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    string s;
    cin >> s;

    bool isB = false;
    bool isC = false;

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'A')
        {
            if (isB || isC)
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else if (s.at(i) == 'B')
        {
            if (isC)
            {
                cout << "No" << endl;
                return 0;
            }
            isB = true;
        } else {
            isC = true;
        }
    }                
    
    cout << "Yes" << endl;
    return 0;
}

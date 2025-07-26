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
    string t = s;
    for (int i = 0; i < s.length(); i++)
    {
        if (t.at(i) != '#')
        {
            t.at(i) = 'o';
            i++;
            if (s.length() <= i)
            {
                break;
            }
            while (t.at(i) == '.')
            {
                i++;
                if (s.length() <= i)
                {
                    break;
                }
            }
        }
    }

    cout << t << endl;
    return 0;
}

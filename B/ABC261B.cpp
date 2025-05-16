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
    int N;
    cin >> N;

    vector<vector<char>> v(N, vector<char>(N, '-'));

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (i == j && s.at(j) != '-')
            {
                cout << "incorrect" << endl;
                return 0;
            }
            v.at(i).at(j) = s.at(j);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            char a = v.at(i).at(j);
            char b = v.at(j).at(i);
            if (a == 'D' && b == 'D')
            {
                continue;
            }
            else if (a == 'W' && b == 'L')
            {
                continue;
            }
            else if (a == 'L' && b == 'W')
            {
                continue;
            }
            else
            {
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }

    cout << "correct" << endl;
    return 0;
}

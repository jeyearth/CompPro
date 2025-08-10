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
    int n;
    cin >> n;
    string pre_s = "";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (pre_s == s && s == "sweet")
        {
            if (i != n - 1)
            {
                cout << "No" << endl;
                return 0;
            }
        }
        pre_s = s;
    }

    cout << "Yes" << endl;

    return 0;
}

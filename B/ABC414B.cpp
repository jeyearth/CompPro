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
    string s = "";
    bool isTooLong = false;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        long long l;
        cin >> l;
        string add_str = "";
        if (l > 100 || s.length() > 100) {
            isTooLong = true;
            break;
        }
        for (long long i = 0; i < l; i++)
        {
            add_str += c;
        }
        s += add_str;
    }

    if (isTooLong || s.length() > 100) {
        cout << "Too Long" << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

bool isCheck(string s, set<string>& setStr) {
    string reverseStr = s;
    reverse(reverseStr.begin(), reverseStr.end());
    if (setStr.count(s) || setStr.count(reverseStr)) {
        return true;
    } else if (!setStr.count(s)) {
        setStr.insert(s);
    } else {
        setStr.insert(reverseStr);
    }
    return false;
};

int main() {
    int n;
    cin >> n;
    set<string> setStr;

    int ans = n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (isCheck(s, setStr)) {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}

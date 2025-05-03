/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> alpha;
    char moji;
    int k = 0;
    for(moji='a'; moji<='z'; ++moji) {
        alpha[moji] = k;
        k++;
    }

    map<char, int> inputMap;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s.at(i);
        inputMap[c] = i;
    }

    char ans = ' ';

    for (pair<char, int> p : alpha) {
        if (!inputMap.count(p.first)) {
            ans = p.first;
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}

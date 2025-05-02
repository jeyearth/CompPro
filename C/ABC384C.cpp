/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> point(5);
    for(int &p : point) {
        cin >> p;
    }

    string s = "ABCDE";

    vector<pair<int, string>> ansVec(31);

    for (int i = 1; i < 32; i++)
    {
        int p = 0;
        string name = "";
        for (int j = 0; j < 5; j++)
        {
            if (i & 1 << j) {
                p += point.at(j);
                name += s.at(j);
            }
        }

        auto pName = make_pair(p * (-1), name);
        ansVec.at(i - 1) = pName;
    }

    sort(ansVec.begin(), ansVec.end());

    for (auto p : ansVec) {
        cout << p.second << endl;
    }
    
    return 0;
}

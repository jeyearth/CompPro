/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<bool>> SVec(N, vector<bool>(N));
    vector<vector<bool>> TVec(N, vector<bool>(N));

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (s.at(j) == '#') {
                SVec.at(i).at(j) = true;
            } else {
                SVec.at(i).at(j) = false;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (s.at(j) == '#') {
                TVec.at(i).at(j) = true;
            } else {
                TVec.at(i).at(j) = false;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << TVec.at(i).at(j);
        }
        cout << endl;
    }
    
    
    return 0;
}

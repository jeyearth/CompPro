/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int N, Q;
    cin >> N;
    vector<vector<int>> v(N, vector<int>(2));

    for (int i = 0; i < N; i++)
    {
        int qi, ri;
        cin >> qi >> ri;
        v.at(i).at(0) = qi;
        v.at(i).at(1) = ri;
    }
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int ti, di;
        cin >> ti >> di;
        int qt = v.at(ti - 1).at(0);
        int rt = v.at(ti - 1).at(1);
        int date = ((di / qt)) * qt + rt;
        if (date < di) {
            date += qt;
        }
        cout << date << endl;
    }
    
    return 0;
}

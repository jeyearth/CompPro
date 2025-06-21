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
    int N, Q;
    cin >> N >> Q;

    string server = "";
    map<int, string> m;

    for (int i = 0; i < Q; i++)
    {
        int qtype;
        cin >> qtype;
        int p;
        cin >> p;
        if (qtype == 1) {
            m[p] = server;
        } else if (qtype == 2) {
            string s;
            cin >> s;
            m[p] += s;
        } else {
            server = m[p];
        }
        

    cout << server << endl;
    return 0;
}

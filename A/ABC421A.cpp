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
    vector<string> rooms(n);
    for (int i = 0; i < n; ++i) {
        cin >> rooms.at(i);
    }
    int x;
    cin >> x;
    string y;
    cin >> y;
    --x;

    if (rooms.at(x) == y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

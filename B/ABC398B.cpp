/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(13, 0);
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;

        vec.at(x - 1)++;
    }

    sort(vec.rbegin(), vec.rend());

    if(vec.at(0) >= 3 && vec.at(1) >= 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
    
}

/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string d;
    cin >> d;

    int j = 0;
    vector<string> vec = {"N", "NE", "E", "SE", "S", "SW", "W", "NW"};
    for (int i = 0; i < 8; i++) {
        if (vec.at(i) == d) {
            j = i;
        }
    }

    cout << vec.at((j + 4) % 8) << endl;
    return 0;
}

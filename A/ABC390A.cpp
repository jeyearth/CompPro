/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(5);
    for (int i = 0; i < vec.size(); i++) {
        cin >> vec.at(i);
    }

    bool isChanged = false;
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec.at(i) != i + 1) {
            if (isChanged) {
                cout << "No" << endl;
                return 0;
            }
            int temp = vec.at(i + 1);
            vec.at(i + 1) = vec.at(i);
            vec.at(i) = temp;
            isChanged = true;
        }
    }

    if (isChanged) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

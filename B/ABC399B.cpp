/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    int r = 1;
    int k;
    vector<int> ranking(n);
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < n; j++) {
            if (ranking.at(j)) continue;
            x = max(x, vec.at(j));
        }

        int k = 0;
        for (int j = 0; j < n; j++) {
            if (vec.at(j) == x) {
                k++;
                ranking.at(j) = r;
            }
        }

        r += k;
    }

    for (int i = 0; i < n; i++) {
        cout << ranking.at(i) << '\n';
    }

    return 0;
}

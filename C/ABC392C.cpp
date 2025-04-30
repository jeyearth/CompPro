/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> pv(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        cin >> pv.at(i).at(0);
    }
    
    map<int, int> qm;
    for (int i = 0; i < N; i++) {
        int q;
        cin >> q;
        qm[q] = i;
        pv.at(i).at(1) = q;
    }

    for (int i = 0; i < N; i++) {
        int qIndex = qm.at(i + 1);
        int toP = pv.at(qIndex).at(0) - 1;
        int ans = pv.at(toP).at(1);
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}

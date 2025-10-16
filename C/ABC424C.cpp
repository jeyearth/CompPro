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

    vector<vector<int>> unlocks(n + 1);

    queue<int> q;
    vector<bool> learned(n + 1, false);

    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0) {
            if (!learned[i]) {
                q.push(i);
                learned[i] = true;
            }
        } else {
            if (a != 0) {
                unlocks[a].push_back(i);
            }
            if (b != 0) {
                unlocks[b].push_back(i);
            }
        }
    }

    int total_learned = 0;

    while (!q.empty()) {
        int current_skill = q.front();
        q.pop();
        total_learned++;

        for (int dependent_skill : unlocks[current_skill]) {
            if (!learned[dependent_skill]) {
                learned[dependent_skill] = true;
                q.push(dependent_skill);
            }
        }
    }

    cout << total_learned << endl;

    return 0;
}

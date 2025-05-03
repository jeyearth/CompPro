/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int v) {
    visited.at(v) = true;
    for (int a : graph.at(v)) {
        if (!visited.at(a)) {
            dfs(a);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    if (N != M) {
        cout << "No" << endl;
        return 0;
    }

    graph.resize(N);
    visited.resize(N, false);

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "No" << endl;
            return 0;
        }

        a--;
        b--;

        graph.at(a).push_back(b);
        graph.at(b).push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        if (graph.at(i).size() != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    dfs(0);

    for (bool v : visited) {
        if (!v) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

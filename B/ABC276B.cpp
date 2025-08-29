/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph.at(a - 1).push_back(b);
        graph.at(b - 1).push_back(a);
    }

    for (int i = 0; i < n; i++) {
        sort(graph.at(i).begin(), graph.at(i).end());
        cout << graph.at(i).size();
        for (int mass : graph.at(i)) {
            cout << " " << mass;
        }
        cout << endl;
    }
    
    return 0;
}

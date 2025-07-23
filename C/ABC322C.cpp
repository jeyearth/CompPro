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
    queue<int> que;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        x--;
        que.push(x);
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int index = que.front();
        cout << index - i << endl;
        if (i == index) {
            que.pop();
        }
    }
    
    return 0;
}

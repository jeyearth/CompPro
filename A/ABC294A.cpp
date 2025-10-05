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
    queue<int> que;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            que.push(a);
        }
    }

    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
    return 0;
}

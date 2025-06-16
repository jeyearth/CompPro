/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int N;
    cin >> N;

    priority_queue<double, vector<double>, greater<double> > que;

    for (int i = 0; i < N; i++)
    {
        double v;
        cin >> v;
        que.push(v);
    }

    for (int i = 0; i < N - 1; i++)
    {
        double x = que.top();
        que.pop();
        double y = que.top();
        que.pop();

        que.push((x + y) / 2);
    }

    cout << que.top() << endl;
    return 0;
}

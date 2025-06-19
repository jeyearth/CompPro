/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    int N;
    cin >> N;
    vector<int> vec(pow(2, N));
    queue<int> que;
    for (int i = 0; i < vec.size(); i++)
    {
        int a;
        cin >> a;
        vec.at(i) = a;
        que.push(a);
    }

    for (int i = 0; i < N - 1; i++)
    {
        queue<int> preQue;
        int queSize = que.size() / 2;
        for (int j = 0; j < queSize; j++)
        {
            int x = que.front();
            que.pop();
            int y = que.front();
            que.pop();
            preQue.push(max(x, y));
        }
        que = preQue;
    }

    int x = que.front();
    que.pop();
    int y = que.front();
    que.pop();
    int second = min(x, y);

    int ans = -1;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec.at(i) == second) {
            ans = i + 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}

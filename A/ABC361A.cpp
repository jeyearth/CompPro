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
    int n, k, x;
    cin >> n >> k >> x;
    queue<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push(tmp);
        if (i == k - 1)
        {
            a.push(x);
        }
    }

    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    return 0;
}

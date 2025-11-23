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
    vector<int> v(n * 7);
    for (int i = 0; i < n * 7; i++)
    {
        cin >> v.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        int weeksum = 0;
        for (int j = 0; j < 7; j++)
        {
            weeksum += v.at(i * 7 + j);
        }
        cout << weeksum << " ";
    }
    return 0;
}

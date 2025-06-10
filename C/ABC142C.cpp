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

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.at(a - 1) = i + 1;
    }
    
    for (int i : v) {
        cout << i << " ";
    }
    
    return 0;
}

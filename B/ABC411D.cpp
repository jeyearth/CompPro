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
    vector<int> vec(N);
    int index = 0;
    vec.at(0) = index;
    for (int i = 1; i < N; i++)
    {
        int d;
        cin >> d;
        index += d;
        vec.at(i) = index;
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            cout << vec.at(j) - vec.at(i) << " ";
        }
        cout << endl;
    }
    
    return 0;
}

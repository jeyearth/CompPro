/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxA = -1e9, maxB = -1e9;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        maxA = max(maxA, A);
    }

    for (int i = 0; i < N; i++)
    {
        int B;
        cin >> B;
        maxB = max(maxB, B);
    }

    cout << maxA + maxB << endl;
    return 0;
}

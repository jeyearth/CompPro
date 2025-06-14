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
    char cone, ctwo;
    cin >> cone >> ctwo;
    string S;
    cin >> S;

    for (int i = 0; i < N; i++)
    {
        if (S.at(i) != cone) {
            S.at(i) = ctwo;
        }
    }

    cout << S << endl;
    return 0;
}

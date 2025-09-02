/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    vector<int> v(5);
    int lastIndex = 0;
    for (int i = 0; i < 5; i++) {
        int time;
        cin >> time;
        v.at(i) = time;
        if (time % 10 < v.at(lastIndex) % 10 && time % 10 != 0) {
            lastIndex = i;
        }
    }

    int totalTime = 0;
    for (int i = 0; i < 5; i++) {
        if (i == lastIndex) continue;
        totalTime += (v.at(i) + 9) / 10 * 10;
    }

    totalTime += v.at(lastIndex);

    cout << totalTime << endl;
    return 0;
}

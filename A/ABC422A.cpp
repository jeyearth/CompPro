/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s;
    cin >> s;
    string world = s.substr(0, 1);
    string stage = s.substr(2, 1);
    int world_num = stoi(world);
    int stage_num = stoi(stage);
    if (stage_num >= 8) {
        world_num++;
        stage_num = 1;
    } else {
        stage_num++;
    }
    cout << world_num << "-" << stage_num << endl;
    return 0;
}

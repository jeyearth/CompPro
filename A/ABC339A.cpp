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

    stringstream ss{s};

    vector<string> words;

    while ( getline(ss, s, '.') ) {
        words.push_back(s);
    }

    cout << words.back() << endl;
    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long n, t;
    cin >> n >> t;
    vector<int> musics(n);
    long long all_time = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        all_time += a;
        musics.at(i) = a;
    }

    t %= all_time;
    long long time = 0;
    for (int i = 0; i < n; i++)
    {
        long long a_time = musics.at(i);
        if (time + a_time > t) {
            cout << i + 1 << " " << t - time << endl;
            return 0;
        } else {
            time += a_time;
        }
    }
    return 0;
}

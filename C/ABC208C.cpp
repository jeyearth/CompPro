/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long n, k;
    cin >> n >> k;

    long long initial = k / n;
    k = k % n;

    vector<pair<long long, long long>> a_vec(n);
    for (int i = 0; i < n; i++)
    {
        long long a_num;
        cin >> a_num;
        a_vec.at(i) = make_pair(a_num, initial);
    }

    vector<int> order(n);
    iota(begin(order), end(order), 0);
    sort(begin(order), end(order), [&](int i, int j) { return a_vec[i] < a_vec[j]; });

    for (int i = 0; i < k; i++)
    {
        a_vec.at(order.at(i)).second += 1;
    }
    
    for (auto it : a_vec) {
        cout << it.second << endl;
    }

    return 0;
}

/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> indexMap;
    long long ans = 0;
    for (long long i = 0; i < n; i++) {
        cin >> a.at(i);
        long long indexMinusValue = i + 1 - a.at(i);
        if (indexMap.count(indexMinusValue) != 0) {
            ans += indexMap.at(indexMinusValue);
        }
        long long valueAddIndex = i + 1 + a.at(i);
        if (indexMap.count(valueAddIndex) == 0) {
            indexMap[valueAddIndex] = 1;
        } else {
            indexMap.at(valueAddIndex) += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

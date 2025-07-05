/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int t;
    cin >> t;
    // double r = -2430 / 729;
    // cout << "r: " << r << endl;
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        vector<long long> s_vec(n);
        vector<long long> abs_vec(n);
        for (long long j = 0; j < n; j++) {
            int a;
            cin >> a;
            s_vec.at(j) = a;
            abs_vec.at(j) = abs(a);
        }
        sort(s_vec.begin(), s_vec.end());
        sort(abs_vec.begin(), abs_vec.end());

        // double r = abs_vec.at(1) / abs_vec.at(0);
        // double second = static_cast<double>(abs_vec.at(0));
        // double first = static_cast<double>(abs_vec.at(1));
        // double r = second / first;

        int first = s_vec.at(0) - 1;
        int second = s_vec.at(1) - 1;
        double r = static_cast<double>(second) / static_cast<double>(first);

        cout << "r: " << r << endl;
        bool ans = true;
        for (int i = 0; i < n - 1; i++)
        {
            
            bool isRatioValid = abs_vec.at(i + 1) / abs_vec.at(i) == abs_vec.at(1) / abs_vec.at(0);
            // cout << "first: " << s_vec.at(i + 1) / s_vec.at(i) << endl;
            // cout << "second: " << s_vec.at(1) / s_vec.at(0) << endl;
            // cout << "isRatioValid: " << isRatioValid << endl;
            // if (s_vec.at(i) * r != s_vec.at(i + 1)) {
            if (!isRatioValid) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}

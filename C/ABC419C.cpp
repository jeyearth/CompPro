/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;

    long long sum_r = 0;
    long long sum_c = 0;

    double max_length = 0.0;
    
    long double center_r = 0.0;
    long double center_c = 0.0;

    // long long center_r = 0;
    // long long center_c = 0;

    long long max_r = 0;
    long long max_c = 0;

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long mass_r, mass_c;
        cin >> mass_r >> mass_c;
        sum_r += mass_r;
        sum_c += mass_c;

        center_r = sum_r / (i + 1);
        center_c = sum_c / (i + 1);

        double mass_r_diff = abs(mass_r - center_r);
        double mass_c_diff = abs(mass_c - center_c);

        double length = sqrt(mass_r_diff * mass_r_diff + mass_c_diff * mass_c_diff);

        if (length >= max_length) {
            max_length = length;
            max_r = mass_r;
            max_c = mass_c;
        }
    }

    cout << "Center: (" << center_r << ", " << center_c << ")" << endl;
    long long diff_r = abs(max_r - center_r);
    long long diff_c = abs(max_c - center_c);
    cout << "Max: (" << max_r << ", " << max_c << ")" << endl;
    cout << "Diff: (" << diff_r << ", " << diff_c << ")" << endl;
    if (abs(max_r - center_r) > abs(max_c - center_c)) {
        ans += diff_r;
    } else {
        ans += diff_c;
    }
    cout << ans << endl;
    return 0;
}

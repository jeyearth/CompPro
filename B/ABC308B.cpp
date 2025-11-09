/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> colors(n);
    for (int i = 0; i < n; i++) {
        cin >> colors.at(i);
    }
    map<string, int> color_price;
    for (int i = 0; i < m; i++) {
        string color;
        cin >> color;
        color_price[color] = 0;
    }
    int othres_price;
    cin >> othres_price;
    for (auto &it: color_price)
    {
        int price;
        cin >> price;
        it.second = price;
    }
    
    int total_price = 0;
    for (int i = 0; i < n; i++) {
        if (color_price.count(colors.at(i))) {
            total_price += color_price[colors.at(i)];
        } else {
            total_price += othres_price;
        }
    }
    cout << total_price << endl;
    return 0;
}

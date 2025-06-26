/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s_grid(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        string input_line;
        cin >> input_line;
        for (int j = 0; j < w; j++) {
            s_grid.at(i).at(j) = input_line.at(j);
        }
    }

    vector<vector<char>> t_grid(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        string input_line;
        cin >> input_line;
        for (int j = 0; j < w; j++) {
            t_grid.at(i).at(j) = input_line.at(j);
        }
    }

    vector<string> s_columns(w);
    for (int j = 0; j < w; j++) {
        string input_line = "";
        for (int i = 0; i < h; i++) {
            input_line += (s_grid.at(i).at(j));
        }
        s_columns.push_back(input_line);
    }

    vector<string> t_columns(w);
    for (int j = 0; j < w; j++) {
        string input_line = "";
        for (int i = 0; i < h; i++) {
            input_line += t_grid.at(i).at(j);
        }
        t_columns.push_back(input_line);
    }

    sort(s_columns.begin(), s_columns.end());
    sort(t_columns.begin(), t_columns.end());

    if (s_columns == t_columns) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

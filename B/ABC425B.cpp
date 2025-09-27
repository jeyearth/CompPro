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
    bool is_ans = true;
    set<int> a_set;
    for (int i = 1; i <= n; i++)
    {
        a_set.insert(i);
    }
    vector<int> a_vec(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        a_vec.at(i) = a;
        if (a != -1) {
            if (a_set.count(a) == 0) {
                is_ans = false;
                break;
            }
            a_set.erase(a);
        }
    }

    if (is_ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
        return 0;
    }

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        if (a_vec.at(i) == -1) {
            int input = *a_set.begin();
            a_set.erase(input);
            a_vec.at(i) = input;
        }
        cout << a_vec.at(i) << " ";
    }
    cout << endl;
    return 0;
}

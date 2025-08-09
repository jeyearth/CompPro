/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a_vec(n);
    int a_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        a_vec.at(i) = a;
        a_sum += a;
    }

    sort(a_vec.begin(), a_vec.end());

    map<int, int> a_map;

    int counted_index = 0;
    for (int i = 0; i < q; i++)
    {
        int b;
        cin >> b;
        if (a_vec.at(n - 1) < b)
        {
            cout << -1 << endl;
        }
        else if (b == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int value = 1;
            if (a_map.count(b))
            {
                value = a_map.at(b);
            }
            else
            {
                int add_value = b - 1;
                for (int j = 0; j < n; j++)
                {
                    if (a_vec.at(j) < b)
                    {
                        value += a_vec.at(j);
                    }
                    else
                    {
                        value += add_value;
                    }
                }
            }
            cout << value << endl;
        }
    }

    return 0;
}

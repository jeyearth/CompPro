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

    stack<char> st;
    while (n > 0)
    {
        if (n % 2 == 0) {
            st.push('B');
            n /= 2;
        } else {
            st.push('A');
            n -= 1;
        }
    }

    while (!st.empty()) {
        cout << st.top() << "";
        st.pop();
    }
    cout << endl;
    return 0;
}

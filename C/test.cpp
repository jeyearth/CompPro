/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

long long tooNBase(long long n, long long N)
{
    string str = "";
    while (n)
    {
        str.push_back('0' + n % N);
        n /= N;
    }
    reverse(str.begin(), str.end());
    return stoll(str);
}

bool isPalindrome(long long n)
{
    string s = to_string(n);
    if (s == string(s.rbegin(), s.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long a, n;
    cin >> a >> n;

    int ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        long long converted = tooNBase(i, a);
        /* code */
        if (isPalindrome(converted))
        {
            // cout << "i: " << i << endl;
            if (isPalindrome(i))
            {
                cout << "converted: " << converted << endl;
                ans += i;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
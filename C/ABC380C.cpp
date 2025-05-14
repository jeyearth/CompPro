/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;

    int kcount = 0;
    int i = 0;
    // k - 1番目の1の塊の最後のindex
    int prei;
    // k番目の1の塊の最初のindex
    int ki;
    // k番目の1の塊の長さ
    int l;
    while (i < N)
    {
        l = 0;
        char a = S.at(i);
        if (a == '1') {
            while (S.at(i) == '1')
            {
                l++;
                i++;
                if (i >= N) break;
            }
            kcount++;
            if (kcount == K - 1) {
                prei = i - 1;
            } else if (kcount == K) {
                ki = i - l;
                break;
            }
        }
        i++;
    }

    string ans = S;
    for (int i = ki; i < ki + l; i++)
    {
        ans.at(i) = '0';
    }

    for (int i = prei + 1; i < prei + 1 + l; i++)
    {
        ans.at(i) = '1';
    }
    
    cout << ans << endl;

    return 0;
}
